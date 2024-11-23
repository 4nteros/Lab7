#include "func.hpp"
#include <iostream>



bool Check(int& n)
{
    std::cin >> n;
    if (n <= 0 || n > N_max)
    {
        std::cout << "Invalid Input. Please, try natural numbers between 1 and 100" << std::endl;
        return false;
    }
    return true;
}

void Read(int mas[N_max][N_max], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> mas [i][j];
        }
    }
}

bool isAbsPrime (int num)
{
    
    int tmp = std::abs(num);
    if(tmp < 2)
        return false;
	for(int d = 2; d <= sqrt(tmp); d++)
	{
		if(tmp % d == 0)
			return false;
	}
	return true;
}

bool hasTwoSameColumns (int mas[N_max][N_max], int n)
{
    for (int j1 = 0; j1 < n; j1++) 
    { 
        for (int j2 = j1 + 1; j2 < n; j2++) 
        { 
            bool same = true; 
            for (int i = 0; i < n; i++) 
            {
                if (mas[i][j1] != mas[i][j2]) 
                {
                    same = false; 
                    break;
                }
            }
            if (same) return true; 
        }
    }
    return false;
}

int sumOfAbs(int mas[N_max], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += std::abs(mas[i]); 
    }
    return sum;
}


void swap(int& a, int& b) 
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swapRows(int mas[N_max][N_max], int row1, int row2, int n) 
{
    for (int j = 0; j < n; j++) 
    {
        swap(mas[row1][j], mas[row2][j]);  
    }
}

void Sort(int mas[N_max][N_max], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sumOfAbs(mas[i], n) > sumOfAbs(mas[j], n))
            {
                swapRows(mas, i, j, n);
            }
        }
    }
}

void Write (int mas[N_max][N_max], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
