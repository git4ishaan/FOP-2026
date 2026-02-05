#include <stdio.h>
#include <math.h> 
#include <stdlib.h> 

int main() 
{
    float a, b, Result;
    int choice;

    printf("Enter two numbers (for Factorial, only the first number is used): ");
    scanf("%f %f", &a, &b);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (a raised to b)\n");
    printf("6. Factorial (of a)\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        Result = a + b;
        printf("Result = %.2f\n", Result);
        break;

    case 2:
        Result = a - b;
        printf("Result = %.2f\n", Result);
        break;

    case 3:
        Result = a * b;
        printf("Result = %.2f\n", Result);
        break;

    case 4:
        if (b != 0)
        {
            Result = a / b;
            printf("Result = %.2f\n", Result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    case 5:
       
        Result = pow(a, b);
        printf("Result = %.2f\n", Result);
        break;

    case 6:
        
        if (a < 0 || (int)a != a)
        {
            printf("Error: Factorial is not defined for negative numbers or non-integers.\n");
        }
        else
        {
            unsigned long long fact = 1; 
            for (int i = 1; i <= (int)a; i++)
            {
                fact *= i;
            }
            printf("Factorial of %d = %llu\n", (int)a, fact);
        }
        break;
        

    default:
        printf("Invalid choice!\n");
    }
    return 0;
}


