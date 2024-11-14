#include <stdio.h>


int main(void){
    int month;
    scanf("%d", &month);
    if (month >= 1 && month <= 12){
        printf("%s", (month >= 3 && month <=5) ? 
                "spring": (month == 12 || month <= 2) ?
                            "winter" : (month >= 6 && month <= 8) ?
                                            "summer" : "autumn");
    }

    return 0;
}