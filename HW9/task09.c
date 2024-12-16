#include <stdio.h>


void swap_negmax_last(int size, int a[]);

int main(void){
    int n = 10;
    int a[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 100};
    swap_negmax_last(n, a);

    return 0;
}

void swap_negmax_last(int size, int a[])
{  
    int max_neg;
    int max_neg_pos;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {   
            //printf("%d ", a[i]);
            max_neg = a[i];
            max_neg_pos = i;
            for (int j = i + 1; j < size; j++)
            {
                //printf("%d %d\n", a[i], a[j]);
                if (a[j] < 0)
                {
                    // printf("%d \t %d\n", a[j], max_neg);
                    if (a[j] > max_neg)
                    {
                        max_neg = a[j];
                        max_neg_pos = j;
                        //printf("%d --> %d", max_neg, max_neg_pos);
                    } 
                }
            }
            break;
        }  
    }
    if (max_neg < 0)
    {
        int tmp = a[size - 1];
        a[size - 1] = max_neg;
        a[max_neg_pos] = tmp;
    }
    //printf("%d", a[size - 1]);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", a[i]);
    // }
}
