#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t year:12;  
    uint32_t month:4; 
    uint32_t day:5; 
    uint32_t hh:5; 
    uint32_t mm:6; 
    int8_t temperature;
} Sensor;

int addSensorDataFrom(FILE* file, Sensor data[]);

void print(Sensor data[], int recordsNum);

float avgTbyMonth(Sensor data[], int records, int monthNum);

float avgTbyYear(Sensor data[], int records);

int maxTinMonth(Sensor data[], int records, int monthNum);

int minTinMonth(Sensor data[], int records, int monthNum);

int maxTinYear(Sensor data[], int records);

int minTinYear(Sensor data[], int records);