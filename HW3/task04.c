#include <stdio.h>


int main(void){
    {
        int n1, n2, n3;
        float m;

        scanf("%d%d%d", &n1, &n2, &n3);
        //m = (float)(n1 + n2 + n3) / 3;
        m = (n1 + n2 + n3) / 3.;
        printf("%.2f", m);
    }
    return 0;
}