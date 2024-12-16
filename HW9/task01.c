#include <stdio.h>


void sort_array(int size, int a[]){
    int tmp = 0;
    for (int i = 0; i <= size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i] > a[j]) 
            {
                //printf("%d - %d - %d\n", a[i], a[j], tmp);
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;

            }
        }
    }

    // for (int i = 0; i < size; i++) 
    // {
    //     printf("%d ", a[i]);
    // }
}

int main(void){
    //int n = 5;
    //int a[5] = {5, 4, 3, 2, 1};
    int n = 20;
    int a[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
    sort_array(n, a);

    return 0;
}