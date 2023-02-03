#include <stdio.h>
#include<string.h>
int main()
{
    char pass[20]={0};
    int a=2;
    int i=0;
    for(i=0;i<3;i++)  //只有三次机会
    {
        printf("please enter the password:");
        scanf("%s",pass);
        if(strcmp(pass,"lzmxka0.")==0)//  == 不能用来判断两个字符串是否相等，要使用strcmp
        {
            printf("login success");
            break;
        }
        else
        {
            printf("wrong password,%d more chance\n", a);
            a--;
        }
    }
    if(i==3)
        printf("please go to manual processing\n");
    return 0;
}
