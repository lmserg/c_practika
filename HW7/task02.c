#include <stdio.h>


int rec_sum(int n){
    if (n > 0){
        return n + rec_sum(n - 1);
    }
    
}

int main(void){
    int N;
    scanf("%d", &N);
    printf("%d ", rec_sum(N));
    return 0;
}