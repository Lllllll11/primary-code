//
// Created by l on 2023/2/20.
//
#include "game.h"
//static 修饰局部变量 修饰全局变量 修饰函数
static int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
    return mine[x][y-1]+mine[x-1][y-1]+mine[x+1][y-1]+mine[x-1][y]
        +mine[x+1][y]+mine[x][y+1]+mine[x-1][y+1]+mine[x+1][y+1]- 8*'0';
}
void InitBoard(char board[ROWS][COLS], int rows , int cols,char set)//因为要初始化两个棋盘，所以并不能用常量解决 需要使用变量
{
    int i=0;
    int j=0;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            board[i][j]=set;//set是一个变量 不需要引号‘’
        }
    }
}


void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    int i=0;
    int j=0;
    printf("----Minesweeper----\n");
    //列号在第一列 直接用for循环打印就可以
    for(i=0;i<=row;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%d ",i);
        for(j=1;j<=col;j++)
        {

            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    printf("----Minesweeper----\n");
}



void SetMine(char board[ROWS][COLS],int row,int col)
{
    int count=EASY_COUNT;
    while(count)//括号里不能放EASY_COUNT 要不就成死循环了！
    {
        //int x=rand()%10;
        //int y=rand()%10;   模十是不可以的，因为有零 且这个地方不能使用常量，因为define改变需要一起改变
        int x=rand()%row+1;//这才是正解 根据坐标随意变换
        int y=rand()%col+1;
        if(board[x][y]=='0')
        {
            board[x][y] = '1';//别瓜了  是赋成1 不是恒等一
            count--;
        }
    }
}



void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;
    int win=0;
    while(win<row*col-EASY_COUNT)
    {
        printf("please enter coordinates:");
        scanf("%d %d",&x,&y);//判断坐标合法性
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(mine[x][y]=='1')
            {
                printf("game over");
                DisplayBoard(mine,row,col);
                break;
            }
            else
            {
                //现在是统计x，y坐标周围雷的个数
                int ret=get_mine_count(mine,x,y);
                show[x][y]='0'+ret;
                DisplayBoard(show,row,col);
                win++;
            }
        }
        else
        {
            printf("please enter again");
        }
    }
    if(win==row*col-EASY_COUNT)
    {
        printf("successful demining\n");
        DisplayBoard(mine,row,col);
    }

}