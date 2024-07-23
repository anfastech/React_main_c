// Question 10 : Leap years in the range
#include <stdio.h>
#include <conio.h>
void main()
{
    int start, end, year;
    clrscr();
    printf("Enter the range : ");
    scanf("%d%d", &start, &end);
    printf("\nLeap years in the range are :\n");
    for (year = start; year <= end; year++)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("%d\t", year);
    }
    getch();
}