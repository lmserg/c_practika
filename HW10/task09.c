#include <stdio.h>
#include <string.h>

#define N 1000

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    signed char c;
    char output[N];
    f_in = fopen("input.txt", "r");
    int count = 0;
    f_out = fopen("output.txt", "w");
    while (((c = fgetc(f_in)) != EOF))
    {
        if (c != ' ')
        {
            output[count] = c;
            count++;
        }
    }
    //printf("%s %d\n", output, count);
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count - 1; j++)
        {
            if (output[i] == output[j])
            {
               output[j] = ' ';
            }
        }
        if (output[i] != ' ')
        {
            fputc(output[i], f_out);
        }
    }
    //printf("%s", output);
    fclose(f_in);
    fclose(f_out);

    return 0;
}
