#pragma once

const int N_max = 100;

bool Check(int& n);
void Read(int mas[N_max][N_max], int n);
bool isAbsPrime (int num);
bool hasTwoSameColumns (int mas[N_max][N_max], int n);
int sumOfAbs(int mas[N_max], int n) ;
void swap(int& a, int& b);
void swapRows(int mas[N_max][N_max], int row1, int row2, int n);
void Sort(int mas[N_max][N_max], int n);
void Write (int mas[N_max][N_max], int n);
