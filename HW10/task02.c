#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    FILE *f_in, *f_out;

    int number;

    f_in = fopen("input.txt", "r");
    if (f_in == NULL)
    {
        return -1;
    }

    fscanf(f_in, "%d", &number);
    fclose(f_in);
    printf("%d\n", number);

    if (number > 26 || number % 2 != 0)
    {
        return -1;
    }

    int i = 0;
    char s[number + 2];
    char alphabet = 'A';
    char odd_nums = '2';

    f_out = fopen("output.txt", "w");
    while (i < number)
    {
        if (i % 2 == 0)
        {
            s[i] = alphabet++;
        }
        else
        {
            s[i] = odd_nums;
            if (odd_nums == '8')
            {
                odd_nums = '2';
            } else
            {
                odd_nums += 2;
            }
        }
        i++;
    }
    s[i] = '\0';
    //printf("%s", s);
    fputs(s, f_out);
    //fprintf(f_out, "%s", s);
    fclose(f_out);
    return 0;
}

