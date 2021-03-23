import math
import numpy as np
import multiprocessing
import os

def dtw(x,y):
    m = len(x)
    n = len(y)
    dp = [[0]*(n+1) for _ in range(m+1)]
    for i in range(1,m+1):
        for j in range(1,n+1):
            dist = (x[i-1]-y[j-1])**2
            dp[i][j] = min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]) + dist
    return math.sqrt(dp[m][n])

def dtw_w(x,y,w):
    m = len(x)
    n = len(y)
    dp = [[0]*(n+1) for _ in range(m+1)]
    for i in range(1,m+1):
        for j in range(max(1,i-w),min(n+1,i+w)):
            dist = (x[i-1]-y[j-1])**2
            dp[i][j] = min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]) + dist
    return math.sqrt(dp[m][n])

def DTW(s1,s2):
    """
    计算两个向量的DTW值
    :param s1: 向量1;list和array类型都可以
    :param s2: 向量2
    :return:
    """
    DTW = {}
    for i in range(len(s1)):
        DTW[(i,-1)] = float('inf')
    for i in range(len(s2)):
        DTW[(-1,i)] = float('inf')
    DTW[(-1,-1)] = 0
    for i in range(len(s1)):
        for j in range(len(s2)):
            dist = (s1[i] - s2[j])**2
            DTW[(i,j)]= dist + min(DTW[(i-1,j)],DTW[(i,j-1)],DTW[(i-1,j-1)])
    return np.sqrt(DTW[(len(s1)-1,len(s2)-1)])

def block_similarity(x,y,i,j):
    m = len(x)
    n = len(y)
    mat = np.zeros((m,n))
    for i in range(m):
        for j in range(n):
            mat[i,j] = dtw(x[i],y[j])
    print("process %s done! blcok(%d,%d) calculated!" % (os.getpid(),i,j))
    return mat

def dtw_parallel(data):
    print('Parent process %s.' % os.getpid())
    k = 5
    block_width = len(data)//5
    pool = multiprocessing.Pool(5)
    results = []
    for i in range(k):
        x = data[block_width*i:block_width*i+block_width]
        for j in range(i,k):
            y = data[block_width*j:block_width*j+block_width]
            results.append(pool.apply_async(block_similarity,(x,y,i,j)))
    if block_width*i+block_width < len(data):
        results.append(pool.apply_async(block_similarity,(data[block_width*i+block_width:],data,-1,-1)))

    print('Waiting for all subprocesses done...')
    pool.close()
    pool.join()
    print('All subprocesses done.')

    whole_dist = np.zeros((len(data),len(data)))
    count = 0
    for i in range(k):
        for j in range(i,k):
            whole_dist[block_width*i:block_width*i+block_width,block_width*j:block_width*j+block_width] = results[count]
            count += 1
    print(count+1)
    print(len(results))
    if block_width*i+block_width < len(data):
        whole_dist[block_width*i+block_width:,:] = results[count]
    for i in range(len(data)):
        for j in range(i):
            whole_dist[i,j] = whole_dist[j,i]
    return whole_dist


if __name__ == '__main__':
    a = [1,2,3]
    b = [1,1,3]
    print(dtw(a,b))
    print(DTW(a,b))