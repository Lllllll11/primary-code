#include <stdio.h>
/*int Bin_count_1(unsigned int i)//这里强制类型转换是为了计算负数的补码中1的个数
{
    int count=0;
    while(i)
    {
        if(i%2==1)
        {
            count++;
        }
        i=i/2;
    }
    return count;
}*/

/*int Bin_count_1(int i)
{

    int count = 0;
    int j=0;
    for(j=0;j<32;j++)
    {
        if (i & 1 == 1)
        {
            count++;
        }
        i=i>>1;//这里每次都移动一位 如果写成i>>1的话 就是每次只给i移动一位，是错误的！

    }
    return count;
}*/

//这种方法没见过 好好理解一下
int Bin_count_1(int i)
{
    int count=0;
    while(i)
    {
        i= (i&(i-1));
        count++;
    }
    return count;//千万别忘了return 要不返回不了正确值·

}


int main()
{
    int i=0;
    scanf("%d",&i);
    int count=Bin_count_1(i);//如果函数创建是返回一个值 要注意立即接受！！
    printf("%d\n",count);
    return 0;
}
