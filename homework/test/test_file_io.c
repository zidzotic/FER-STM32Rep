#include <stdio.h>
#include <stdlib.h>
#include "file_io.h"

int main()
{
    int numbers[5];
    if (read_numbers("res/input.txt", numbers, 5) != 5)
    {
        printf("test_read_numbers failed\n");
        return 1;
    }

    if (write_result("res/output.txt", 6.0) != 0)
    {
        printf("test_write_result failed\n");
        return 1;
    }

    printf("All file_io tests passed.\n");
    return 0;
}