#include <stdio.h>

int main()
{
    int year;
    int count=0;//用于输出一共有多少年是闰年
    for(year=1000;year<=2000;year++)
    {
        if (0 == year % 4 && year % 100 != 0) {
            printf("%d ", year);
            count++;
        } else if (0 == year % 400) {
            printf("%d ", year);
            count++;
        }
    }
        printf("\ncount=%d",count);
    return 0;
}
