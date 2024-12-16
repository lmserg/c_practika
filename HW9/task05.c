#include <stdio.h>


int find_max_array(int size, int a[]);

int main(void){
    int n = 13;
    int a[] = {773, 307, 371, 548, 531, 765, 402, 27, 573, 591, 217, 859, 662};
    int max = find_max_array(n, a);
    printf("%d", max);

    return 0;
}

int find_max_array(int size, int a[]){
    int max = a[0];
    for (int i = 1; i < size; i ++)
    {
        if (*(a + i) > max)
        {
            max = *(a + i);
        }
    }
    return max;
}