#include <stdio.h>

int main()
{
    int totalNums;
    printf("Enter Numbers u want to Enter: ");
    scanf("%d", &totalNums);

    int allNumbers[100];
    int evenNumbers[100];
    int oddNumbers[100];

    int evenCount = 0;
    int oddCount = 0;

    printf("Please enter your %d numbers:\n", totalNums);
    for (int i = 0; i < totalNums; i++)
    {
        scanf("%d", &allNumbers[i]);
    }

    for (int i = 0; i < totalNums; i++)
    {

        if (allNumbers[i] % 2 == 0)
        {
            evenNumbers[evenCount] = allNumbers[i];
            evenCount++;
        }
        else
        {
            oddNumbers[oddCount] = allNumbers[i];
            oddCount++;
        }
    }

    printf("\n--- Results ---\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");

    return 0;
}