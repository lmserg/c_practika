#include <stdio.h>


int main(void){
    unsigned long a;
    int c, sum;
    scanf("%d", &a);
    for (;;){
        c = a % 10;
        a /= 10;
        //printf("%d\n", c);
        sum += c;
        if (a == 0){
             break;
        }
    }
    printf("%d", sum);
    return 0;
}