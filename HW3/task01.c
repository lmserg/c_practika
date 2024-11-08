#include <stdio.h>


int main(void){
    {
        int x, y, z, r;

        scanf("%d%d%d", &x, &y, &z);
        r = x + y + z;
        printf("%d+%d+%d=%d", x, y, z, r);
    }
    return 0;
}