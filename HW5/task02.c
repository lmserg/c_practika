#include <stdio.h>


int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    while (a <= b) {
        if (a > b && (a > 100 || b > 100)){
            break;
        }
        printf("%d ", a * a);
        a++;
    }

    return 0;
}

