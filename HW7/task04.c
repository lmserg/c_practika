#include <stdio.h>


void print_num(int n){
    if (n > 0) {
        print_num(n / 10);
    } if (n != 0){
        printf("%d ", n % 10);
    }
}

int main(void){
    int N;
    scanf("%d", &N);
    if (N == 0){
        printf("%d", 0);
    }
    print_num(N);
    return 0;
}