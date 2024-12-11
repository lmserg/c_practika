#include <stdio.h>


void min(int *a, int n){
    int minimum = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] < minimum){
            minimum = a[i];
        }
    }
    printf("%d", minimum);
}

int main(void){
    int n = 5;
    int a[5];
    float result;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    min(a, n);

    return 0;
}