// Question 12 : Standard deviation
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i, n;
    float x[10], sd, mean, sum;
    clrscr();
    printf("Enter the limit : ");
    scanf("%d", &n);
    printf("\nEnter %d numbers for the data set :\n", n);
    for (sum = 0, i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        sum = sum + x[i];
    }
    mean = sum / n;
    for (sum = 0, i = 0; i < n; i++)
    {
        sum = sum + (x[i] - mean) * (x[i] - mean);
    }
    sd = sqrt(sum / n);
    printf("\nStandard deviation is %g", sd);
    getch();
}