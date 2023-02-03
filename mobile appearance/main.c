#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    char arr1[]="wangyufei,I love you once";
    char arr2[]="#########################";
    //不断替换出现从左边第一个+右边第一个不断向中间替换
    int left=0;
    int right=strlen(arr1)-1;//只需要名字 不需要加[]，strlen计算字符串长度 不包含‘\0’
    while(left<=right)
    {
        arr2[left]=arr1[left];
        arr2[right]= arr1[right];//数别写反了
        printf("%s\n",arr2);
        Sleep(500);//每打印一次停顿0.5s
        system("cls");// ();//执行系统命令的函数 ,cls-清空屏幕
        left++;
        right--;//别忘了这两个变量的变化
    }
    return 0;
}
