// Question 7 : print amstrong numbers from startnumber - endnumber
#include <stdio.h>
#include <conio.h>
void main()
{
    // print amstrong numbers from startnumber - endnumber    // 1) input ranges , we set values in sn (startnumber),en (endnumber)    // 2) for loop through the range    // 3) temp = i ,then amstrong loop    // 4) print amstrong, End program
    int sn, en, i;
    // clrscr();
    printf("Enter Start Number : ");
    scanf("%d", &sn);
    printf("Enter End Number : ");
    scanf("%d", &en);
    printf("The Amstrongs Numbers are : ");
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
            printf("  %d  ,", i);
        }
    }
    getch();
}