#include <stdio.h>

int main()
{
    /*int ch;
    int ret;
    char password[20]={0};
    printf("please input a password >:");
    scanf("%s",password);//scanf只会读取空格之前的数据 所以需要用一个while循环用getchar不断将输入缓冲区清空
    //getchar();
    while((ch=getchar()) != '\n')//把标准缓冲区中的‘\n’读走
    {
        //此处一个分号表示空语句，不需要while循环体里有什么动作
        ;
    }
    printf("Please enter Y\\N to confirm the password>:");
    ret=getchar();
    if('Y'==ret)
    {
        printf("confirm success");
    }
    else
    {
        printf("waiver of confirmation");
    }*/
    int ch;
    while((ch=getchar()) != 'EOF')
        //注意getchar是获取字符 putchar是输出字符 别记混了
    {
        if(ch<'0' || ch>'9')
            continue;
        putchar(ch);
        break;
    }

    return 0;
}
