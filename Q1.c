// Question 1 : Solution of a quadratic equation
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a, b, c;
    // clrscr();
    double d, root1, root2;
    printf("Enter the coefficients a, b, and c: ");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("Root 1: %f\n", root1);
        printf("Root 2: %f\n", root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %f\n", root1);
    }
    else
    {
        printf("Roots are imaginary\n");
    }
    getch();
}