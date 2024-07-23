
// Question 3 : Fibonacci number at position
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, i, n;
    clrscr();
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
    printf("\nFibonacci number at position %d is %d", n, c);
    getch();
}

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

// Question 6 : pyramid printing 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, n;
    clrscr();
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    printf("\nPyramid of * with %d rows:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("*");
    }
    getch();
}

// Question 7 : print amstrong numbers from startnumber - endnumber
#include <stdio.h>
#include <conio.h>
void main()
{
    // print amstrong numbers from startnumber - endnumber    // 1) input ranges , we set values in sn (startnumber),en (endnumber)    // 2) for loop through the range    // 3) temp = i ,then amstrong loop    // 4) print amstrong, End program
    int sn, en, i;
    clrscr();
    printf("Enter Range : \n start number = ");
    scanf("%d", &sn);
    printf("Enter Range : \n end number = ");
    scanf("%d", &en);
    for (i = sn; i <= en; i++)
    {
        int temp = i, s = 0, r, j;
        for (j = 0; temp > 0; j++)
        {
            r = temp % 10;
            s = s + r * r * r;
            temp = temp / 10;
        }
        if (s == i)
        {
            printf("\nHere %d is amstrong", i);
        }
    }
    getch();
}


// Question 10 : Leap years in the range
#include <stdio.h>
#include <conio.h>
void main()
{
    int lb, ub, year;
    clrscr();
    printf("Enter the range : ");
    scanf("%d%d", &lb, &ub);
    printf("\nLeap years in the range are :\n");
    for (year = lb; year <= ub; year++)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("%d\t", year);
    }
    getch();
}



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
