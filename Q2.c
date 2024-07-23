// Question 2 : Sum of the digits and reverse of a number
#include <stdio.h>
#include <conio.h>
void main()
{
    int number, temp, r, sum = 0, reversed = 0;
    // clrscr();
    printf("Enter an integer: ");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        r = number % 10;
        sum += r;
        reversed = reversed * 10 + r;
        number /= 10;
    }
    printf("Sum of digits of %d is %d\n", temp, sum);
    printf("Reverse of %d is %d\n", temp, reversed);
    getch();
}