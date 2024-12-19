#include <stdio.h>
#include <string.h>

#define N 10000

int main(int argc, char **argv)
{
    signed char c;
    FILE *f_in = fopen("input.txt", "r");

    int pr = 0;
    int zg = 0;
    while ( (c = fgetc(f_in)) != EOF )
    {
        if (c >= 'a' && c <= 'z')
        {
           pr++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
           zg++;
        }
    }
    fclose(f_in);
    //printf("%d %d", pr, zg);
    FILE *f_out = fopen("output.txt", "w");
    fprintf(f_out, "%d %d", pr, zg);
    fclose(f_out);
    return 0;
}

