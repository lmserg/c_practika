#include <stdio.h>


float mean(int *a, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return (float)sum / n ;
}

int main(void){
    int n = 12;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    float result = mean(a, n);
    printf("%.2f", result);

    return 0;
}