#include <stdio.h>

// 1. Iterative Function
unsigned long long factorial_iterative(int n)
{
    if (n < 0)
        return 0;
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

// 2. Recursive Function
unsigned long long factorial_recursive(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main()
{
    int num; // Create a variable to hold the user's input

    // Prompt the user so they know what to do
    printf("Enter a positive integer to find its factorial: ");
    scanf("%d", &num);

    // Safety check: Factorials of negative numbers don't exist
    if (num < 0)
    {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        // Calculate and print the results
        printf("\n--- Results ---\n");
        printf("Iterative: %d! = %llu\n", num, factorial_iterative(num));
        printf("Recursive: %d! = %llu\n", num, factorial_recursive(num));
    }

    return 0;
}