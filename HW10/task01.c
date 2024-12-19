#include <stdio.h>
#include <string.h>

#define N 100

int main(int argc, char **argv)
{
    FILE *f_in;
    FILE *f_out;

    char buffer[N];
    int times = 3;
    char c;

    f_in = fopen("input.txt", "r");

    int i = 0;
    while (((c = getc(f_in)) != EOF ) && (c != '\n'))
    {
        buffer[i] = c;
        i++;
    }
    buffer[i] = '\0';
    fclose(f_in);

    //printf("%s\n", buffer);
    //printf("%d\n", i);

    f_out = fopen("output.txt", "w");
    for (int i = 0; i < times; i++)
    {
        fprintf(f_out, "%s", buffer);
        if (i < times - 1)
        {
            fprintf(f_out, ", ");
        }
    }
    fprintf(f_out, " %d", i);
    fclose(f_out);
    return 0;
}

