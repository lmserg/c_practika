#include <stdio.h>
#include <stdlib.h>


int main(void){

    int nrows = 10;
    int ncolumns = 10;
    //int A[nrows][ncolumns];
    //int max_number = 100;

    int A[10][10] = {{61, 75, 55, 2, 35, 34, 77, 93, 28, 49},
        {11, 34, 22, 78, 19, 14, 67, 67, 11, 0},
        {72, 39, 23, 53, 92, 51, 60, 34, 71, 63},
        {14, 27, 72, 6, 0, 79, 98, 56, 30, 15},
        {31, 16, 3, 4, 95, 59, 25, 17, 11, 20},
        {5, 93, 21, 61, 96, 30, 79, 38, 73, 40},
        {89, 4, 66, 19, 36, 99, 67, 67, 92, 36},
        {87, 54, 7, 35, 40, 43, 44, 46, 4, 69},
        {98, 57, 20, 75, 9, 66, 85, 9, 39, 31},
        {8, 90, 94, 25, 12, 30, 18, 10, 23, 15},
    };

    // int A[10][10] = {
    //     {47, 24, 56, 33, 22, 90, 89, 84, 29, 78},
    //     {78, 51, 32, 94, 45, 55, 60, 9, 78, 76}, 
    //     {13, 48, 52, 33, 66, 32, 62, 25, 86, 87}, 
    //     {67, 22, 95, 72, 27, 60, 87, 52, 66, 73}, 
    //     {44, 66, 64, 79, 19, 69, 16, 82, 70, 53}, 
    //     {97, 34, 52, 73, 7, 50, 78, 40, 60, 34},
    //     {39, 19, 15, 18, 28, 40, 13, 98, 30, 17}, 
    //     {38, 39, 84, 3, 57, 62, 12, 74, 1, 78},
    //     {15, 69, 62, 20, 22, 23, 22, 95, 31, 29}, 
    //     {32, 44, 31, 8, 55, 92, 33, 30, 94, 74}
    // };

    // for (int i = 0; i < nrows; i++)
    // {   
    //     for (int j = 0; j < ncolumns; j++)
    //     {
    //         a[i][j] = rand() % max_number;
    //     }
    // }

    int sum = 0;
    int max; // = A[0][0];
    for (int i = 0; i < nrows; i++)
    {   
        max = A[i][0];
        for (int j = 0; j < ncolumns; j++)
        {   
           if (A[i][j] > max) 
           {
                 max = A[i][j];
           }
        }
        //printf("%d - %d\n", i, max);
        sum += max;
    }
    printf("%d\n", sum);

    return 0;
}