// Question 3 : Fibonacci number at position
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, i, n;
    // clrscr();
    
    printf("Enter the position : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("\nInvalid position");
        getch();
        return;
    }
    for (a = 1, b = 0, i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nFibonacci number at position %d is %d \n\n", n, c);
}
