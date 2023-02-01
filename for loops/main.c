#include <stdio.h>
//for循环
int main()
{
    //对比两段代码 由于while不会执行c++这句代码而陷入死循环，for是可以进行i++这句的（调整句）所以不会进入死循环
    int i;
    int c=1;
    for(i=1 ; i<=10 ; i++)//将while的三部分整合成一部分比较方便
    {
        if(5==i)
            //break;//跳出循环
            continue;
        printf("%d ",i);
    }
    printf("\n");
    while(c<=10)
    {
        if(5==c)
            continue;
        printf("%d ",c);
        c++;
    }
    return 0;
}
