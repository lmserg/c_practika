#include <stdio.h>


int main(void){
    {
        unsigned long x;
        unsigned long y;

        scanf("%d", &x);
        //printf("%d\n", x % 10);
        //printf("%d\n", (x / 10) % 10);
        //printf("%d\n", x / 100);
        y = (x / 100) * ((x / 10) % 10) * (x % 10);
        printf("%d", y);
    }
    return 0;
}