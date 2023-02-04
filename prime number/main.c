#include <stdio.h>
#include<math.h>
//判断一个数是否为素数
int main()
{
    //这种求素数的代码不够优化
    int i;
    int j;
    int count=0;
    for (i = 101; i <= 200; i+=2)//偶数都是素数，此处由i++换成i+=2效率提高一倍，i=100必须换成i=101
    {
        //for(j=2;j<i;j++)
        for(j=2;j<=sqrt(i);j++)
        {
            if (0 == i % j)
            {
                break;//此处break只是跳出靠近的这个for
            }
        }
        //printf("%d ",i);如果此处就打印打印的只会是每一次循环进来的i，打印素数还要进行判断
        /*
        if(i==j)//这样才是真正打印素数,因为只要是不是素数 跳出来的i、j结果就不同
            count++;
            printf("%d ",i);
            *///此处if下没加{}又造成错误，printf变成和上面那个printf一样作用
        //if(j==i)
        if(j>sqrt(i))//算法优化后的结果
        {
            count++;
            printf("%d ",i);
        }

    }
    printf("\nsum=%d\n",count);
    return 0;
}
