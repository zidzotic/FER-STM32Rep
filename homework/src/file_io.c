#include <stdio.h>
#include <stdlib.h>

#include "file_io.h"

int read_numbers(const char *filename, int *numbers, int max_count)
{

    FILE *file = fopen(filename, "r"); // read
    if (file == NULL)
    {
        return -1;
    }

    int count = 0;
    while (count < max_count && fscanf(file, "%d", &numbers[count]) == 1)
    {
        count++;
    }
    fclose(file);
    return count;
}

int write_result(const char *filename, float result)
{

    FILE *file = fopen(filename, "w"); // write
    if (file == NULL)
    {
        return -1;
    }

    if (fprintf(file, "%.2f\n", result) < 0)
    {
        fclose(file);
        return -1;
    }

    fclose(file);
    return 0;
}