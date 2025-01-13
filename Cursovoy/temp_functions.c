#include "temp_functions.h"

#define N 6

int addSensorDataFrom(FILE* file, Sensor data[]) {
    int correctRowCounter = 0, rowCounter = 0; //
    int Y, M, D, hh, mm, T;
    int r;
    while ((r = fscanf(file, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &hh, &mm, &T)) >= 0) {
        if (r < N) {
            char s[30];
            r = fscanf(file, "%[^\n]", s);
            printf("Non-correct Data - Row: [%d]\n", rowCounter);
            printf("----------------------------\n");
        } else {
            //printf("%d = %d;%d;%d;%d;%d;%d\n", r, Y, M, D, hh, mm, T);
            data[correctRowCounter].year = Y;
            data[correctRowCounter].month = M;
            data[correctRowCounter].day = D;
            data[correctRowCounter].hh = hh;
            data[correctRowCounter].mm = mm;
            data[correctRowCounter].temperature = T;
            correctRowCounter++;
        } 
        rowCounter++;
    }
    return correctRowCounter;
}

void print(Sensor data[], int recordsNum) {
    for (int i = 0; i < recordsNum; i++) {
        printf("%04d-%02d-%02d %02d:%02d T =%3d\n",
        data[i].year,
         data[i].month,
          data[i].day,
        data[i].hh,
         data[i].mm,
          data[i].temperature);
    }
}

float avgTbyMonth(Sensor data[], int recordsNum, int monthNum) {
    float sum = 0.;
    int counter = 1;
    for (int i = 0; i < recordsNum; i++) {
        if (data[i].month == monthNum) {
            //printf("%d -- %d\n", monthNum, data[i].temperature);
            sum += data[i].temperature;
            counter++;
        }
    }
    //printf("%d %f\n", counter - 1, sum);
    return sum / (counter - 1);
}

float avgTbyYear(Sensor data[], int recordsNum) {
    float sum = 0.;
    for (int i = 0; i < recordsNum; i++) {
        sum += data[i].temperature;
    }
    return sum / recordsNum;
}

int maxTinMonth(Sensor data[], int recordsNum, int monthNum) {
    int flag = 1;
    int max;
    for (int i = 0; i < recordsNum; i++) {
        if (data[i].month == monthNum) {
            if (flag) {
                max = data[i].temperature;
                flag = 0;
            }
            if (max < data[i].temperature) {
                max = data[i].temperature;
            }
        }
    }
    //printf("Maximum T in #[%d]: %d\n", monthNum, max);
    return max;
}

int maxTinYear(Sensor data[], int recordsNum) {
    int max = data[0].temperature;
    for (int i = 0; i < recordsNum; i++) {
        if (max < data[i].temperature) {
            max = data[i].temperature;
        }
    }
    return max;
}

int minTinMonth(Sensor data[], int recordsNum, int monthNum) {
    int flag = 1;
    int min;
    for (int i = 0; i < recordsNum; i++) {
        if (data[i].month == monthNum) {
            if (flag) {
                min = data[i].temperature;
                flag = 0;
            }
            if (min > data[i].temperature) {
                min = data[i].temperature;
            }
        }
    }
    //printf("Minimum T in #[%d]: %d\n", monthNum, min);
    return min;
}

int minTinYear(Sensor data[], int recordsNum) {
    int min = data[0].temperature;
    for (int i = 0; i < recordsNum; i++) {
        if (min > data[i].temperature) {
            min = data[i].temperature;
        }
    }
    return min;
}