#include <stdio.h>


void print_array(int *a, int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void invThirds(int *a, int n){
    int b[n];
    int t = 0;
    for (int i = 0; i <= n; i++){
        if (i % 4 == 0 && i != 0){
            //printf("%d - %d\n", i, t);
            for (int j = 0; j < 2; j++)
            {   
                int tmp = a[j + t];
                a[j + t] = a[i - 1 - j];
                a[i - 1 - j] = tmp;
            }
            t += 4;
        }  
    }
    print_array(a, n);
}

int main(void){
    int n = 12;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    invThirds(a, n);

    return 0;
}