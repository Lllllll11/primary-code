//
// Created by l on 2023/2/20.
//

#ifndef MINE_CLEARANCE_GAME_H
#define MINE_CLEARANCE_GAME_H
#define EASY_COUNT 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);//操作的还是11*11的数组
void InitBoard(char board[ROWS][COLS], int rows , int cols, char set);//接收传过来的东西 其名字自己命名无所谓，数组里边的变量一定得加上
#endif //MINE_CLEARANCE_GAME_H
