// /* 
// Question 9 : Printing digits Pattern  N = 39174 
//     3 9 1 7 4
//     9 1 7 4
//     1 7 4
//     7 4
//     4

// */ 

// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     /* Insiallization main variables , temp variables , loop variables */
//     int number, count = 0, place_value = 1, digit;
//     int temp, i_temp, j_temp , place_value_temp;
//     int i , j ;
//     // clrscr();


//     printf("Enter an Number  : ");
//     scanf("%d", &number);

//     temp = i_temp = j_temp = number;

//     /* Counting the digits  */

//     while (number != 0)
//     {
//         count++;
//         number /= 10;
//     }

//     /* Inisiallizing  place value to get the value to print and store in temp reduce the digit  */ 


//     for (i = 1; i < count; i++)
//     {
//         place_value *= 10;
//     }
//     place_value_temp = place_value;


//     /* Loop to print the digits  */

//     for (i = 0; i < count; i++)
//     {
//         place_value_temp = place_value, j_temp = i_temp;
//         for (j = 0; j < count-i; j++)
//         {
//             digit = j_temp / place_value_temp;
//             printf(" %d ", digit);
//             j_temp = j_temp - (digit * place_value_temp);
//             place_value_temp = place_value_temp / 10;
//         }
//         i_temp = i_temp - ((i_temp / place_value) * place_value);
//         place_value = place_value / 10;
//         printf("\n");
//     }


//     getch();
// }

/*
Question 9 : Printing digits Pattern  N = 39174
    3 9 1 7 4
    9 1 7 4
    1 7 4
    7 4
    4

*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int number, count = 0;
    int i_temp, j_temp;
    double place_value, digit;
    int i, j;
    // clrscr();
    printf("Enter an Number  : ");
    scanf("%d", &number);
    i_temp = j_temp = number;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    for (i = 0; i < count; i++)
    {
        j_temp = i_temp;
        for (j = 0; j < count - i; j++)
        {
            place_value = pow(10, count - j - i - 1);
            digit = j_temp / place_value;
            printf(" %d ", (int)digit);
            j_temp %= (int)place_value;
        }
        place_value = pow(10, count - i - 1);
        i_temp %= (int)place_value;
        printf("\n");
    }
    getch();
}