#include <stdio.h>


int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (b > a && c > b ) {
        printf("%s\n", "YES");
        }
    else {
        printf("%s\n", "NO");
        }
    //printf("%s\n", (b > a && c > b ) ? "YES" : "NO");
    return 0;
}