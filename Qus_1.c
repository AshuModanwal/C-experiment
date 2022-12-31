#include <stdio.h>
int main()
{

    char gender, smoke;
    int age;
    float amount, insAmount;
    printf("Enter age of Employee: ");
    scanf("%d", &age);
    printf("\nEnter gender of person: ");
    fflush(stdin);
    scanf("%c", &gender);
    printf("\nIs person a smoker? ");
    fflush(stdin);
    scanf("%c", &smoke);
    if (age <= 30 && age >= 21)
    {
        if (gender == 'F')
        {
            if (smoke == 'Y')
            {
                amount = 10000 - (10000 * 10 / 100);
                insAmount = amount + (amount * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
            else
            {
                insAmount = 10000 - (10000 * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
        }
        else
        {
            if (smoke == 'Y')
            {
        
                insAmount = 10000 + (10000 * 10 / 100);
                printf("His total amount is: %f", insAmount);
            }
            else{
                insAmount = 10000;
                printf("His total amount is: %f", insAmount);
            }
        }
        
    }
    else if (age <= 40 && age >= 31)
    {
        if (gender == 'F')
        {
            if (smoke == 'Y')
            {
                amount = 15000 - (15000 * 10 / 100);
                insAmount = amount + (amount * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
            else
            {
                insAmount = 15000 - (15000 * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
        }
        else
        {
            if (smoke == 'Y')
            {
                
                insAmount = 15000 + (15000 * 10 / 100);
                printf("His total amount is: %f", insAmount);
            }
            else{
                insAmount = 15000;
                printf("His total amount is: %f", insAmount);
            }
        }
    }
    else if (age <= 50 && age >= 41)
    {
        if (gender == 'F')
        {
            if (smoke == 'Y')
            {
                amount = 20000 - (20000 * 10 / 100);
                insAmount = amount + (amount * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
            else
            {
                insAmount = 20000 - (20000 * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
        }
        else
        {
            if (smoke == 'Y')
            {
            
                insAmount = 20000 + (20000 * 10 / 100);
                printf("His total amount is: %f", insAmount);
            }
            else{
                insAmount = 20000;
                printf("His total amount is: %f", insAmount);
            }
        }
    }
    else if (age <= 60 && age >= 51)
    {
        if (gender == 'F')
        {
            if (smoke == 'Y')
            {
                amount = 40000 - (40000 * 10 / 100);
                insAmount = amount + (amount * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
            else
            {
                insAmount = 40000 - (40000 * 10 / 100);
                printf("Her total amount is: %f", insAmount);
            }
        }
        else
        {
            if (smoke == 'Y')
            {
                
                insAmount = 40000 + (40000 * 10 / 100);
                printf("His total amount is: %f", insAmount);
            }
            else{
                insAmount = 40000;
                printf("His total amount is: %f", insAmount);
            }
        }
    }
    else
    {
        printf("Insurance is not availabe at this age.");
    }
    printf("\nProgrammed by Ashutosh modanwal.");
    printf("\nLib. Id. 2224MCA1068");
    return 0;
}