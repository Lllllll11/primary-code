#include <stdio.h>
#include<stdlib.h>
int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");
again
    printf("请输入：我是猪，否则电脑将在60s内关机\n请输入>:");
    scanf("%s",input);
    if(strcmp(input,"我是猪")==0)
        system("shutdown -a");
    else
        goto again;

    return 0;
}
