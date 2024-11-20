#include <stdio.h>


int rec(int n){
    if (n > 0) {
        printf("%d ", n % 10);
        return rec(n/10);
    }
}

int main(void){
    int N;
    scanf("%d", &N);
    if (N == 0) {
        printf("%d", 0);
        return 0;
    }
    rec(N);
    return 0;
}