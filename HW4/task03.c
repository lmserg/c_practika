#include <stdio.h>
#include <inttypes.h>


int main(void){
    unsigned int value_1, value_2, value_3, result;
    uint16_t a;
    scanf("%" SCNd16, &a);
    value_1 = a / 100; // 4
    //printf("%d\n", value_1);
    value_2 = (a / 10) % 10; // 3
    //printf("%d\n", value_2);
    value_3 = a % 10; // 5
    //printf("%d\n", value_3);
    if ((value_1 > value_2) && (value_1 > value_3)){
        printf("%" PRId8, value_1);
    }
    else if ((value_2 > value_1) && (value_2 > value_3)){
        printf("%" PRId8, value_2);
    }
    else if ((value_3 > value_1) && (value_3 > value_2)){
        printf("%" PRId8, value_3);
    }
    else {
        printf("%d", value_1);
    }

    return 0;
}