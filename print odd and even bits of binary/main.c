#include <stdio.h>
void Print(int n)
{
    int i=0;
    int j=0;
    int tmp=n;
    //从最低位开始打印的
    for(i=0;i<31;i+=2) //奇数次从零开始移动30位
    {
        // 那个>>显示为灰色的时候就证明没有被使用
        n=n>>2;//右移位算运算操作符，这样写不对，这样写n不会发生变化 导致bug，存不起来，用完运算操作符存起来！！！！！
        printf("%d ",(n&1));
        //printf("%d",(n>>i)&1)  简洁且正确的写法
    }
    printf("\n");
    for(j=1;j<32;j+=2) //偶数次从1开始移动30位
    {
        if(j==1)
            tmp=tmp >> 1;
        else
            tmp=tmp>>2;
        printf("%d ",(tmp&1));
    }
}


int main()
{
    int i=0;
    scanf("%d",&i);
    Print(i);
    return 0;
}
