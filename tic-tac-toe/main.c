
#include "game.h"
//测试模块

//1.先写测试函数，2.测试函数中打印菜单 3.测试主体使用do while循环

//游戏的整个逻辑，先打印出棋盘
void game()
{
    char ret;
    //数组--存放走出的信息
    char board[ROW][COL]={0}; //这个地方要能控制，不一定是3*3
    //初始化棋盘
    InitBoard(board,ROW,COL);//游戏模块的相关代码 在另一个文件里写，不是游戏的在main里写,传参时只需要数组名
    //打印棋盘
    DisplayBoard(board,ROW,COL);
    //下棋
    while(1)
    {
        //玩家下棋
        //判断输赢需要在每次下完棋之后
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret=IsWin(board,ROW,COL);// 玩家赢‘*’，电脑赢‘#’，平局‘Q’，继续‘C’
        if(ret!='C')
            break;
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret=IsWin(board,ROW,COL);// 玩家赢‘*’，电脑赢‘#’，平局‘Q’，继续‘C’
        if(ret!='C')
            break;

    }
    if(ret=='*')
        printf("player win\n");
    else if(ret=='#')
        printf("computer win\n");
    else
        printf("game draw\n");
}

void menu()
{
    printf("***************************\n");
    printf("***** 1.play   0.exit *****\n");
    printf("***************************\n");
}
void test()//测试函数主体部分
{
    //int i;这里i不能不赋值，不赋值循环回来第二次会出问题导致函数直接进入switch
    int i=0;
    srand((unsigned int)time(NULL));
    do
    {
        //int i; i不能放在这个部分，如果放在这个部分跳出do 后面的while就没法用了
        menu();
        printf("please select :>");
        scanf("%d",&i);//scanf结束后按的那下回车进行的换行
        switch(i)
        {
            case 1:
                game();
                break;
            case 0:
                printf("exit the game\n");
                break;
            default:
                printf("wrong selection,please reselect\n");
                break;

        }
    }while(i);
}

int main()
{
    test();

    return 0;
}
