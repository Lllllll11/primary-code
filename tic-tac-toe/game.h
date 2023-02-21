//
// Created by l on 2023/2/18.
//
//函数声明
#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InitBoard(char board[ROW][COL],int row,int col);//引用的地方需要写全称，包括括号里的元素
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
char IsWin(char board[ROW][COL],int row,int col);
int IsFull(char board[ROW][COL],int row,int col);
#endif //TIC_TAC_TOE_GAME_H
