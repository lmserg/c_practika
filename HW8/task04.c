#include <stdio.h>


int sumOfTwoMaxs(int *a, int n){
    int max1 = a[0];
    int pos1 = 0;
    for (int i = 1; i < n; i++){
        if (a[i] > max1){
            max1 = a[i];
            pos1 = i;
        }
    }
    int max2 = a[n-(n/2)];
    for (int i = 0; i < n; i++){
        if (a[i] >= max2 && pos1 != i){
            max2 = a[i];
        }
    }
    return (max1 + max2);
}

int main(void){
    int n = 10;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int result = sumOfTwoMaxs(a, n);
    printf("%d", result);

    return 0;
}