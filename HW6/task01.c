#include <stdio.h>


int abs(int n){
    if (n < 0){
        n *= -1;
    }
    return n;
}

int main(void){

    int n;
    scanf("%d", &n);
    printf("%d", abs(n));


    return 0;
}