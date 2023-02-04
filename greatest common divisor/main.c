#include <stdio.h>
//辗转相除法求最大公约数
int main()
{
    int a;
    int b;
    int r;
    scanf("%d %d",&a,&b);
    while(r=a%b)
    {
        a=b;
        b=r;
    }
    printf("%d",b);
    return 0;
}
