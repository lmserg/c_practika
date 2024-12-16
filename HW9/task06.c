#include <stdio.h>


int is_two_same(int size, int a[]);

int main(void){
    int n = 5;
    int a[] = {1, 2, 1, 4, 5};
    int result = is_two_same(n, a);
    printf("%d", result);
    return 0;
}

int is_two_same(int size, int a[])
{
    for (int i =  0; i < size; i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if (a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
