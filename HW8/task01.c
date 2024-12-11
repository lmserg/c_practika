#include <stdio.h>


void mean(int *a, int n){
    int sum = 0;
    float result = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    result = (float)sum / n;
    printf("%.3f", result);
}

int main(void){
    int n = 5;
    int a[5];
    float result;
    for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);
    }
    mean(a, n);

    return 0;
}





