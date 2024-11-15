#include <stdio.h>


int main(void){
    unsigned long a;
    int i, c;
    scanf("%d", &a);
    for (i=1;;i++){
        c = a % 10;
        a /= 10;
        //printf("%d\n", a);
        if (a == 0){
             break;
        }
    }
    if (i == 3){
        printf("%s", "YES");
    } 
    else {
         printf("%s", "NO");
    }
   
    return 0;
}