#include <stdio.h>


int sumOfPositive(int *a, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > 0){
           sum += a[i];
        }
    }
    return sum;
}

int main(void){
    int n = 10;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int result = sumOfPositive(a, n);
    printf("%d", result);

    return 0;
}