#include <stdio.h>
int Dif_bits(int x,int y)
{
    int count=0;
    int n=x^y;
    while(n)
    {
        n= n&(n-1);
        count++;
    }
    return count;
}



int main()
{
    int i=0;
    int j=0;
    scanf("%d %d",&i,&j);
    int ret=Dif_bits(i,j);
    printf("%d",ret);
    return 0;
}
