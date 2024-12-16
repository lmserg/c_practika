#include <stdio.h>


void change_max_min(int size, int a[]);

int main(void){
    int n = 10;
    //int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a[10] = {6, 2, 3, 4, 100, 1, 7, 8, 9, 10};
    change_max_min(n, a);
    return 0;
}

void change_max_min(int size, int a[]){
    int *pmax;
    int *pmin;
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            pmax = &a[i];
        }
        if (a[i] <= min)
        {
            min = a[i];
            pmin = &a[i];
        }
    }
    // printf("%d %d\n", *pmax, *pmin);
    int tmp = *pmax; // макcимальное значение в tmp
    *pmax = *pmin; // минимальное значение на место максимального
    *pmin = tmp; // максимальное на место минимального
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", a[i]);
    // }    
}