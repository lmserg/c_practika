#include <stdio.h>
#include <inttypes.h>


int main(void){

    int a, b;

    scanf("%d%d", &a, &b);
    printf("%s", (a >= b) ? ( (a == b) ? "Equal": "Above") : "Less");

    return 0;
}