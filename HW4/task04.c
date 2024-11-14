#include <stdio.h>
#include <inttypes.h>


int main(void){

    int a, b, c, d, e, maximum, minimum;
    uint8_t result;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    maximum = a > b ? a : b;
    maximum = maximum > c ? maximum : c;
    maximum = maximum > d ? maximum : d;
    maximum = maximum > e ? maximum : e;

    minimum = a < b ? a : b;
    minimum = minimum < c ? minimum : c;
    minimum = minimum < d ? minimum : d;
    minimum = minimum < e ? minimum : e;

    //printf("%d %d\n", maximum, minimum);
    result = maximum + minimum;
    printf("%" PRId8, result);

    return 0;
}