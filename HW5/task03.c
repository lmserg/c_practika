#include <stdio.h>


int main(void){
    int a, b;
    unsigned long sum = 0;
    //printf("%d", sizeof(sum));
    scanf("%d%d", &a, &b);
    while (a <= b) {
        if (a > b && (a > 100 || b > 100)){
            break;
        }
        sum += a * a;
        a++;
    }
    printf("%d", sum);
    return 0;
}