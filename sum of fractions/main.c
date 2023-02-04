#include <stdio.h>
//计算1/1-1/2+1/3-1/4
int main() {
    int i;
    float ret=0;//因为下面要进行浮点数运算，这里就换成浮点数
    int flag=1;
    for(i=1;i<=100;i++)
    {
        ret+=flag*1.0/i;//有许多种算法，注意这里的1.0
        flag=-flag;
        /*if (i%2 == 0)
            ret -=1.0/i;//此处1/i等于0，要注意，要把一个数换成浮点型
        else if (i%2 == 1)
            ret +=1.0/i;   */
    }
    printf("ret=%f",ret);
    return 0;
}
