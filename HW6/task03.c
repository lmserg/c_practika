#include <stdio.h>


int mean(int a, int b){
    if ((a < 0 || b < 0)){
        return -1;
    }
    return (a + b) / 2;
}

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", mean(a, b));

    return 0;
}