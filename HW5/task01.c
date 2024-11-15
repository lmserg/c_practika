#include <stdio.h>

int main(void) {
    int n;
    int i = 1;
    scanf("%d", &n);
    while (i <= n){
        printf("%d ", i);
        printf("%d ", i * i);
        printf("%d\n", i * i * i);
        i++;
        if (i > 100){
            break;
        }
    }

    return 0;
}