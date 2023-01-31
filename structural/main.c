//结构体代码 还是不是很熟练 有空再敲一遍!

#include <stdio.h>
#include<string.h>
struct Book
        {
    char name [20];
    int price;
    char author[10];
        };

int main()
{
    struct Book b1 = {"C program",55,"tan"};
    struct Book* pb=&b1;
    b1.price =25;
    strcpy(b1.name,"C++ program");  //这句代码好好理解一下
    printf("name:%s\n",(*pb).name);
    printf("price:%d\n",pb->price);
    printf("author:%s\n",b1.author);
    printf("Hello, World!\n");
    return 0;
}
