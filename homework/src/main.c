#include <stdio.h>
#include <stdlib.h>

#include "file_io.h"
#include "compute.h"

int main(void)
{
    const char *input_file = "res/input.txt";
    const char *output_file = "res/output.txt";

    int numbers[100]; // Polje za pohranu pročitanih brojeva
    int max_count = 100;

    // Čitanje brojeva iz datoteke
    int count = read_numbers(input_file, numbers, max_count);
    if (count == -1)
    {
        fprintf(stderr, "Greška pri čitanju datoteke %s.\n", input_file);
        return 1;
    }

    // Izračunavanje zbroja
    int sum = compute_sum(numbers, count);
    printf("Zbroj brojeva: %d\n", sum);

    // Izračunavanje prosjeka
    float avg = compute_average(numbers, count);
    printf("Prosjek brojeva: %.2f\n", avg);

    // Izračunavanje moving average s prozorom veličine 3
    int window_size = 6;
    float moving_avg = compute_moving_average(numbers, count, window_size);
    printf("Moving average (prozor %d): %.2f\n", window_size, moving_avg);

    // Zapisivanje prosjeka u datoteku
    if (write_result(output_file, avg) == -1)
    {
        fprintf(stderr, "Greška pri pisanju u datoteku %s.\n", output_file);
        return 1;
    }

    printf("Rezultat uspješno zapisan u %s.\n", output_file);
    return 0;
}