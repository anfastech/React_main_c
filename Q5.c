// Question 5, Evaluate 1+x+x^2/2!+x^3/3!+…………+x^n/n!    // 1) consider two values dividing ( x power i )/(factorial of i)
#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 0, n = 0, i;
    double a, power = 1, ifact = 1, sum;
    printf("\n Enter X of the sequence : ");
    scanf("%d", &x);
    printf("\n Enter n of the sequence : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        a = 0;
        power = power * x;
        ifact = ifact * i;
        if (i == 0)
        {
            power = 1, ifact = 1;
            printf("\n 1 ");
        } else if (i==1){
            printf("+ X ");
        }
        else
        {
            printf("+ ( X^%d / %d! ) ", i, i);
        }
        a = power / ifact;
        sum = sum + a;
    }
    printf("\n sum of the sequence = %.3lf ", sum);
    getch();
}