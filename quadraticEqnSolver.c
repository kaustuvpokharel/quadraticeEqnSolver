#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    float anshalf, anshalf1, ans1, ans2;
    //this

    printf("Enter the value of 'a' in \"ax^2 + bx + c\": ");
    scanf("%f", &a);
    printf("Enter the value of 'b' in \"ax^2 + bx + c\": ");
    scanf("%f", &b);
    printf("Enter the value of 'c' in \"ax^2 + bx + c\": ");
    scanf("%f", &c);

    float root = 0.5;
    int sq = 2;

    float noType = pow(b,sq) - (4*a*c);
    printf("%f \n", noType);
    if(noType < 0)
    {
        printf("There are no real roots. \n");
    }
    else if(noType == 0)
    {
        printf("There are one real roots. \n");
        anshalf = (- b) + pow(noType, root);
        ans1 = anshalf / (2*a);
        printf("The solved value of 'x' is: %0.2f", ans1);
    }
    else if(noType > 0)
    {
        printf("There are two real root. \n");
        anshalf1 = (-b) + pow(noType, root);
        anshalf = (-b) - pow(noType, root);
        ans1 = anshalf / (2*a);
        ans2 = anshalf1 / (2*a);
        printf("The solved values of 'x' is: %0.2f & %0.2f", ans1, ans2);
    }
    
}