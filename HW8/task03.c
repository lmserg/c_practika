#include <stdio.h>


void max_and_pos(int *a, int n, int *max, int *maxpos){
    *max = a[0];
    int indx = 1;
    *maxpos = indx;
    for (int i = 1; i < n; i++){
        if (a[i] > *max){
            *max = a[i];
            *maxpos = i + 1;
        }
    }
}

void min_and_pos(int *a, int n, int *min, int *minpos){
    *min = a[0];
    int indx = 1;
    *minpos = indx;
    for (int i = 1; i < n; i++){
        if (a[i] < *min){
            *min = a[i];
            *minpos = i + 1;
        }
    }
}

int main(void){
    int n = 10;
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max_value = 0;
    int max_position = 0;
    int min_value = 0;
    int min_position = 0;
    max_and_pos(a, n, &max_value, &max_position);
    printf("%d %d ", max_position, max_value);
    min_and_pos(a, n, &min_value, &min_position);
    printf("%d %d ", min_position, min_value);

    return 0;
}