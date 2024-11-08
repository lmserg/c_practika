#include <stdio.h>


int main(void){
    {
        unsigned int x, y, z, s, p; 

        scanf("%d %d %d", &x, &y, &z);
        s = x + y + z;
        printf("%d+%d+%d=%d\n", x, y, z, s);
        
        p = x * y * z;
        printf("%d*%d*%d=%d\n", x, y, z, p);
    }
    return 0;
}