#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
    // Design a scientific calculator
    // square function 
    int btn,x=1953125;
    double a = 0.333333333333333310;
    printf("\n The cube root = %f\n",pow(x,a));
    return;
    start:
    printf("\n\nScientific Calculator Options \n    1) Square of X \n    2) Cube of the X \n    3) Square Root of X \n\n Choose the option : ");
    scanf("%d",&btn);
    switch (btn)
    {
    case 1:
        printf("\n Enter X to find X^2 : ");
        scanf("%d",&x);
        printf("\n The X^2 = %.0f\n",pow(x,2));
        printf("\n The cube root = %f\n",pow(x,0.3333333333333333333333333));
        printf("\n The root = %f\n",pow(x,0.5));
        printf("\n The Root = %f\n",sqrt(x));
        break;
    case 2:
        printf("\n Enter X to find X^3 : ");
        scanf("%d",&x);
        printf("\n The X^3 = %d\n",x*x*x);
        break;
    case 3:
        printf("\n Enter X to find root : ");
        scanf("%d",&x);
        printf("\n The Root = %f\n",sqrt(x));
        break;
    default:
        printf("\nInvalid Input\n\n");
        return;
        break;
    }
    
    getch();
    goto start;

}