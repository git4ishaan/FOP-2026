#include <stdio.h>

int main() {
    int binary, decimal = 0;
    int base = 1;   // represents 2^0
    int remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0) {
        remainder = binary % 10;   // get last digit
        decimal = decimal + remainder * base;
        binary = binary / 10;      // remove last digit
        base = base * 2;           // increase power of 2
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}