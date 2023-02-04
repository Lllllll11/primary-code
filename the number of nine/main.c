#include <stdio.h>
//数1-100中9的个数 用取余和商的办法 特别注意99里面有两个9 要加两次
int main()
{
    int i;
    int count=0;
    for(i=1;i<=100;i++)//让语句循环起来1-100不断进入
    {
        if(9==i%10)//计算个位上的9
            count++;
        if(9==i/10)//计算十位上的9
            count++;
    }
    printf("count=%d\n",count);
    return 0;
}
