#include <stdio.h>
int Print_each_digit(int i)
{
    if(i>9)
    {
        int n=Print_each_digit(i/10) + i%10;
        return n;
    }
    else
        return i;
}
int main()
{
    int i=0;
    scanf("%d",&i);
    int ret=Print_each_digit(i);
    printf("%d",ret);
    return 0;
}
