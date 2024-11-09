#include <stdio.h>
#include "compute.h"

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    if (compute_sum(numbers, 5) != 15)
    {
        printf("test_compute_sum failed\n");
        return 1;
    }

    if (compute_average(numbers, 5) != 3.0f)
    {
        printf("test_compute_average failed\n");
        return 1;
    }

    if (compute_moving_average(numbers, 5, 3) != 3.0f)
    {
        printf("test_compute_moving_average failed\n");
        return 1;
    }

    printf("All compute tests passed.\n");
    return 0;
}