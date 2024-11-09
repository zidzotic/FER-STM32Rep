#include <stdio.h>
#include <stdlib.h>

#include "compute.h"

int compute_sum(const int *numbers, int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return sum;
}

float compute_average(const int *numbers, int count)
{
    return (float)compute_sum(numbers, count) / count;
}

float compute_moving_average(const int *numbers, int count, int window_size)
{
    return (float)compute_sum(numbers, window_size) / count;
}
