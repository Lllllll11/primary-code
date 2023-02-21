//
// Created by l on 2023/2/18.
//
//函数定义
//注意输入 标准输入缓冲区并没有清除 需特别注意
#include "game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
    //变量输进来先赋值要不后期全是bug
    int i;
    int j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';  //给字符赋值用单引号
        }
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)  //打印棋盘
{
    int i;
    for(i=0;i<row;i++)
    {
        //这里只能打印三列，需要代码优化
        //printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//别忘了换行!还有下标是从0开始！！！
        //if(i<row-1)
        //    printf("---|---|---\n");//别忘了换行！！
        /*int j;
        for(j=0;j<col;j++)//打印board数据，但是这个地方写错了，分割线for成了board for的下一级这样打印出来不会对齐
         board的for和分割线的for是平齐的，地位相同
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
            printf("\n");
            if(i<row-1)//判断用不用打印分割线
            {
                for(j=0;j<col;j++)
                {
                    printf("---");
                    if(j<col-1)
                        printf("|");

                }
            }
            printf("\n");
        }

    }
}*/
        int j;
        for(j=0;j<col;j++)//打印数据
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
            if(i<row-1)//判断用不用打印分割线
            {
                for(j=0;j<col;j++)
                {
                    printf("---");
                    if(j<col-1)
                        printf("|");
                }
                printf("\n");
            }

    }
}


void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    printf("player play chess!\n");
    //printf("Please enter the coordinates to be downloaded:>"); 这句话不能在外面 在外面如果坐标重复就不会让你输入了
    while(1)
    {
        printf("Please enter the coordinates to be downloaded:>");
        scanf("%d %d",&x,&y);
        //先判断坐标的合法性
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='*';
                break;
            }
            else
            {
                printf("the coordinate has benn occupied!\n");
            }
        }
        else
            printf("The coordinates are illegal, please re-enter!\n");//别忘了换行
    }
}


void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    printf("computer play chess!\n");
    while(1)
    {
        x=rand()%row;  //余数都是board的下标
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}
int IsFull(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            //if(board[i][j]!=' '),这么写代码是有问题的 因为从头开始遍历 一旦有一个不是空格就会返回1
            //正确的思想应该是一旦有空格就返回0，因为所有元素都遍历，       而不是没空格返回1
            if(board[i][j] ==' ')
                return 0;

        }
    }
    return 1;
}
char IsWin(char board[ROW][COL],int row, int col)//传进来数组需要知道几行几列 所以方括号里要有变量
{
    int i;
    for(i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1] !=' ')
            return board[i][1];
    }
    for(i=0;i<col;i++)
    {
        if(board[0][i]==board[1][i] && board[2][i]==board[1][i] && board[1][i] !=' ')
            return board[1][i];
    }
    if(board[0][0]==board[1][1]&& board[1][1]==board[2][2] && board[1][1]!=' ')
        return board[1][1];
    if(board[0][2]==board[1][1]&& board[1][1]==board[2][0] && board[1][1]!=' ')
        return board[1][1];
    if(1==IsFull(board,ROW,COL))
        return 'Q';
    return 'C'; //别忘了这个C要不就会出错
}