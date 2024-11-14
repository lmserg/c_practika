#include <stdio.h>


int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
        printf("%s", "YES");
    else 
        printf("%s", "NO");
    //printf("\n%s", (a + b > c && b + c > a && a + c > b) ? "YES" : "NO");
    return 0;
}