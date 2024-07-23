#include <stdio.h>
#include <math.h>
void main()
{
    int number, count = 0;
    int temp_number;
    int i, j;

    printf("Enter a Number: ");
    scanf("%d", &number);
    temp_number = number;

    // Counting the digits
    while (temp_number != 0)
    {
        count++;
        temp_number /= 10;
    }

    // Printing the pattern
    for (i = 0; i < count; i++)
    {
        temp_number = number;
        // Skipping the first i digits
        for (int k = 0; k < i; k++)
        {
            temp_number %= (int)pow(10, count - k - 1);
        }
        for (j = i; j < count; j++)
        {
            int place_value = (int)pow(10, count - j - 1);
            int digit = temp_number / place_value;
            printf("%d ", digit);
            temp_number %= place_value;
        }
        printf("\n");
    }
}
