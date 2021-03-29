# include <stdio.h>

void hanoi(int n,char x,char y,char z);

void hanoi(int n,char x,char y,char z)
{
    if(n==1)
    {
        printf("%c-->%c\n",x,z);
    }
    else
    {
        hanoi(n-1,x,y,z); //将n-1个从x到y
        printf("%c-->%c\n",x,z);
        hanoi(n-1,y,z,x); //将n-1个从y到z
    }
}

int main(void)
{
    int n;
    printf("请输入汉诺塔的层数:");
    scanf("%d",&n);

    hanoi(n,'X','Y','Z');

    return 0;
}
