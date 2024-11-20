#include <stdio.h>


void rec(int n){
    if (n > 0) {
       rec(n - 1); 
    printf("%d ", n);
    }
}

int main(void){
    int N;
    scanf("%d", &N);
    rec(N);
    return 0;
}