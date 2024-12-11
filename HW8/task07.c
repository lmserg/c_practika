#include <stdio.h>


void invHalfs(int *a, int n){
    int b[n];
    for (int i = 0; i < n; i++){
        b[i] = 0;
        if (i < (n / 2)){
            b[i] = a[(n / 2) - (i + 1)];
        }
        else {
            b[i] = a[n - i + (n / 2) - 1];
        }
        printf("%d ", b[i]);
    }
}

int main(void){
    int n = 10;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    invHalfs(a, n);

    return 0;
}