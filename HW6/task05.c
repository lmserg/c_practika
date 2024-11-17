#include <stdio.h>


int sumFrom1To(unsigned int N){
    if ((N == 0)){
         return -1;
    }
    int i = 1, s = 0;
    while (i <= N){
        s += i;
        i++;
    }
    return s;
}

int main(void){
    int N, s;
    scanf("%d", &N);
    s = sumFrom1To(N);
    printf("%d", s);
    return 0;
}