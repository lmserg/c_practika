#include <stdio.h>
#include <string.h>

#define N 1000

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    signed char c;
    char str[N];

    f_in = fopen("input.txt", "r");
    f_out = fopen("output.txt", "w");
    int i = 0;
    while ( (c = fgetc(f_in)) != EOF ) // посимвольное (побайтовое) чтение
    {
        if (c == 'a')
        {
            str[i] = 'b';
        }
        else if (c == 'A')
        {
            str[i] = 'B';
        }
        else if (c == 'b')
        {
            str[i] = 'a';
        }
        else if (c == 'B')
        {
            str[i] = 'A';
        }
        else
        {
            str[i] = c;
        }
        fputc(str[i], f_out); // посимвольная (побайтовая) запись
        i++;
    }
    //fputc('\0', f_out);
    //printf("%s", str);
    fclose(f_in);
    fclose(f_out);
    return 0;
}

