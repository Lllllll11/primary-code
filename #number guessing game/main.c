#include <stdio.h>
#include<stdlib.h>
#include <time.h>


//猜数字游戏，电脑生成随机数，然后进行猜数字 做一个菜单，因为不管玩不玩都需要先进入，所以要用到do while循环
void menu()
{
    printf("***********************\n");
    printf("*** 1.play   0.exit ***\n");
    printf("***********************\n");//千万别忘了'\n'!,要不打印出菜单来就乱套了
}

//这里比较难，这是被主函数调用的game函数，需要先 生成一个随机数，然后进行猜数字
void game()
{
    int ret;
    int a;
    ret=rand()%100+1;//生成随机数的函数,找个变量把随机值接收起来，生成随机数范围是0-32767
    //调用rand之前，要调用srand函数去设置随机数生成器
    //2.猜数字
    while(1) {
        printf("please enter number from 1 to 100:");
        scanf("%d", &a);
        if (a > ret)
        {
            printf("that's a big guess,little simpleton.\n");
        }
        else if (a < ret)
        {
            printf("that's a small guess,little simpleton.\n");
        }
        else
        {

            printf("honey,congratulations on being right.\n");
            break;//这个break一定归到代码块里来，要不归进来，不管怎样都break了
        }

    }
}
// RAND_MAX rank() 生成的最大值为0x7fff

int main()
{
    int i;
    srand((unsigned int)time(NULL));//括号里的数就能决定rand（）生成的数，括号里需要写一个随机数，用时间戳来设置随机数的生成起始点
    //time_t是一个代号，其代指长整型，只不过是被重命名了 time_t time(time_t* timer); 所以time生成的是一个长整型，NULL空指针
    //如果这个函数放在这个game函数里，那玩一次游戏就要更改一次随机数的生成起点，会造成生成的随机数靠的过近
    // 把它放在主函数里，让其在函数开始时就形成随机数的生成起点（固定了）
    do
    {
        menu();
        printf("please select:");
        scanf("%d",&i);
        //现在需要使用多分支结构进行开始游戏，退出，输入错误 重新输入的选择,可以使用switch多分支语句
        switch(i)//switch后面加多句代码也需要代码块，switch和if，while一样，后面不用加分号
        {
            case 1:
                game();
                break;
            case 0:
                printf("exiting game\n");
                break;
            default:
                printf("Input error,please retype 1/0\n");
                break;
        }
            //好习惯每一个case以及default后面都加上break（注意：有时候不用加）

    }while(i);//注意while要写在这个地方，还得加分号

    return 0;
}
//该加\n的时候别忘了加 要不打印出来的东西没法看
