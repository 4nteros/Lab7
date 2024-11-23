#include "func.hpp"

int main ()
{
    int mas[N_max][N_max];
    int n;
    if (Check(n))
    {

    Read(mas, n);

    if (hasTwoSameColumns(mas, n)) 
    {
        
        for (int i = 0; i < n; i++) 
        { 
            for (int j = 0; j < n; j++) 
            {
                if (isAbsPrime(mas[i][j])) 
                {
                    Sort(mas, n);
                    break;
                }
            }

        }
    }

    }

    Write(mas, n);


    return 0;
}