#include "game.h"
void game()
{
    //先布置雷，后排查雷，需要一个9*9的二维数组作为棋盘
    //用两个数组，一个存放雷，一个打印雷 棋盘问题
    //要把棋盘放大，保证不要越界 将棋盘创建成11*11
    char mine[ROWS][COLS]={0};//存放布置好的雷的信息,全部初始化为’0‘
    char show[ROWS][COLS]={0};//存放排查出来的信息，全部初始化为‘*’
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    SetMine(mine,ROW,COL);//布置雷使用mine数组
    //DisplayBoard(mine,ROW,COL);
    FindMine(mine,show,ROW,COL);

}
void menu()
{
    printf("****************************\n");
    printf("*******1.play  0.exit*******\n");
    printf("****************************\n");
}
int main()
{
    srand((unsigned int)time(NULL));
    int i=0;
    do
    {
        menu();
        printf("please select:>");
        scanf("%d",&i);
        switch (i)
        {
            case 1:
                printf("mine clearance\n");
                game();
                break;
            case 0:
                printf("exit game\n");
                break;
            default:
                printf("input error,please input again");
                break;
        }
    }while(i);
    return 0;
}
