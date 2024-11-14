#include <stdio.h>


int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c)) {
        printf("%d", a);
    }
    if ((b > a) && (b > c)) {
        printf("%d", b);
    }
    if ((c > a) && (c > b)) {
        printf("%d", c);
    }
    if (a == 0 && b ==0 && c == 0) {
        printf("%d", 0);
    }

    return 0;
}