#include <stdio.h>

void main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit ;
        temp /= 10; 
    }
    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    

}