# include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book = {
    "带你学c带你飞",
    "小甲鱼",
    48.8,
    {
        2017,11,11
    },
    "清华大学出版社"
};

int main()
{
//    printf("请输入书名：");
//    scanf("%s",book.title);
//    printf("请输入作者：");
//    scanf("%s",book.author);
//    printf("请输入价格：");
//    scanf("%f",&book.price);
//    printf("请输入出版日期：");
//    scanf("%d",&book.date);
//    printf("请输入出版社：");
//    scanf("%s",book.publisher);

//    printf("\n--录入完成！--\n");
    printf("书名:%s\n",book.title);
    printf("作者:%s\n",book.author);
    printf("价格:%.2f\n",book.price);
    printf("日期:%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
    printf("出版社:%s\n",book.publisher);

    return 0;
}
