/*Write a program that takes an integer as input and returns true if the input is a power of two*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number you want to test: ");
    scanf("%d", &num);

    // Condition to check whether the number is a power of two
    // Performing bitwise operation
    if ((num != 0) && ((num & (num - 1)) == 0))
        printf("\n%d is a power of 2\n", num);
    else
        printf("\n%d is not a power of 2\n", num);

    return 0;
}