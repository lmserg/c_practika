#include <stdio.h>


void _2bin(int n){
    if (n > 1){
        _2bin(n / 2);
    }
    printf("%d", n % 2);
}

int main(void){
    int N;
    scanf("%d", &N);
    _2bin(N);
    return 0;
}