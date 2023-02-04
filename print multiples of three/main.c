#include <stdio.h>

int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
        if(0==a%3)
            printf("%d ",a);
    }
    return 0;
}
