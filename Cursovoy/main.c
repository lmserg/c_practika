#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "temp_functions.h"

#define SIZE 518400 

int main(int argc, char *argv[]) {
    int RECORDS = 0;
    FILE* file;
    char filename[30]; 
    Sensor* data = calloc(SIZE, sizeof(Sensor));
    if (!data) {
        printf("Dynamic Memory not allocated for array!");
        return -1;
    }
    
    int rez = 0;
    if (argc == 1) {
        printf(" Execute: .\\*.exe -h [help]\n");
    }
    // opterr = 0;
    int mflag = 0, fflag = 0;
    int month;
    while ((rez = getopt(argc, argv, "hf:m:")) != -1) {
        switch (rez) {
            case 'h':
                printf("\n");
                printf("[Temperature Sensor Data CLI Proccessing]\n");
                printf("\t-h : manual for CLI arguments [optional].\n");
                printf("\t-f : CSV-file name [requested].\n");
                printf("\t-m : number of month for output statistics [optional].\n");
                printf("\n"); // !
                break;
            case 'm':
                mflag = 1; 
                fflag = 0;
                //printf("%s\n", optarg);
                sscanf(optarg, "%d", &month);
                break;
            case 'f':
                fflag = 1;
                strcpy(filename, optarg);
                file = fopen(filename, "r");
                if (file == NULL) {
                    perror("Error: Can\'t open FILE!");
                return -1;
                }
                RECORDS = addSensorDataFrom(file, data);
                fclose(file);
                break;
            case '?':
                printf("CLI argument\'s Error! [See help: -h argument]\n");
        }
    }
    if (mflag && !fflag) {
        float avgTM = avgTbyMonth(data, RECORDS, month);
        int maxTM = maxTinMonth(data, RECORDS, month);
        int minTM = minTinMonth(data, RECORDS, month);
        printf(" --------------------------------\n");
        printf("|Month\'s Temperature Statistics:|\n");
        printf(" --------------------------------\n");
        printf("Month:|\tAvg.T.:| Max.T.:| Min.T.:|\n");
        printf("%6d|\t%6.1f | %6d | %6d |\n", month, avgTM, maxTM, minTM);
        //print(data, RECORDS);
    } else if (fflag && !mflag) {
        float avgTM;
        int maxTM;
        int minTM;
        // Добавить статистику по всем месяцам за год
        printf("Month:|\tAvg.T.:| Max.T.:| Min.T.:|\n");
        for (int monthNum = 1; monthNum <= 12; monthNum++) {
            avgTM = avgTbyMonth(data, RECORDS, monthNum);
            maxTM = maxTinMonth(data, RECORDS, monthNum);
            minTM = minTinMonth(data, RECORDS, monthNum);
            printf("%6d|\t%6.1f | %6d | %6d |\n", monthNum, avgTM, maxTM, minTM);
        }
        float avgTY = avgTbyYear(data, RECORDS);
        int maxTY = maxTinYear(data, RECORDS);
        int minTY = minTinYear(data, RECORDS);
        printf(" ------------------------------\n");
        printf("|Year\'s Temperature Statistics:|\n");
        printf(" ------------------------------\n");
        printf("Year:|\tAvg.T.:| Max.T.:| Min.T.:|\n");
        printf("%4d | \t%6.1f | %6d | %6d |\n", data[0].year, avgTY, maxTY, minTY);
        printf("Total Correct Temperature Records: [%d]\n", RECORDS);
    }
    free(data);
    return 0;
}