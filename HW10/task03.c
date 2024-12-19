#include <stdio.h>
#include <string.h>

#define N 1000

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    size_t last_byte_pos;
    char last_c;
    signed char c;

    f_in = fopen("input.txt", "r");
    int fromEnd = 0;
    while (1)
    {
        fseek(f_in, -fromEnd, SEEK_END); // указатель на предпоследний символ
        c = fgetc(f_in);
        if (c == '\n' || c == ' ' || c == -1)
        {
            ++fromEnd;
            continue;
        }
        fseek(f_in, -1, SEEK_CUR);
        last_byte_pos = ftell(f_in);
        fscanf(f_in, "%c", &last_c);
        //printf("Position: %llu - Symbol: %c \n", last_byte_pos, last_c);
        break;
    }
    fseek(f_in, 0, SEEK_SET); // Указатель в "нулевое" положение
    f_out = fopen("output.txt", "w");
    int i = 0;
    while (i < last_byte_pos)
    {
        c = fgetc(f_in);
        //printf("%c\n", c);
        if (c == last_c)
        {
            fprintf(f_out, "%d ", i);
        }
        i++;
    }
    fseek(f_out, -1, SEEK_END);
    //int pos = ftell(f_out);
    //printf("%d", pos);
    fputc('\n', f_out);
    fclose(f_in);
    fclose(f_out);

    return 0;
}
