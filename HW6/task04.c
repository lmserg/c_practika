#include <stdio.h>


int f(int x){
    if ((x >= -2 && x < 2)){
         return x * x;
    }
    else if (x >= 2){
        return x * x + 4 * x + 5;
    }
    else {
        return 4;
    }
}

int main(void){
    int x = 1;
    int y = 0, max = 0;
    while (x != 0){
        scanf("%d", &x);
        y = f(x); 
        if (y > max){
            max = y;
        }
    }
    printf("%d", max);


    return 0;
}