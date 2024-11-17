#include <stdio.h>


int power(int n, int p){
    if ((n > 1000 && p > 1000) || (p < 0)){
        return -1;
    }
    int i = 1;
    int result = 1;
    while (i <= p){
        result *= n;
        i++;
    }
    return result;
}

int main(void){
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", power(n, p));

    return 0;
}