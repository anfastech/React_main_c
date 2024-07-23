// Question 4 : positive, negative, zero
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, x, pc, nc, zc;
    clrscr();
    printf("Enter the limit : ");
    scanf("%d", &n);
    printf("\nEnter %d numbers :\n", n);
    for (pc = 0, nc = 0, zc = 0, i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
            pc++;
        else if (x < 0)
            nc++;
        else
            zc++;
    }
    printf("\nNumber of positive numbers = %d", pc);
    printf("\nNumber of negative numbers = %d", nc);
    printf("\nNumber of zeroes = %d", zc);
    getch();
}