#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking the user for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);  // Take the first number as input

    printf("Enter second number: ");
    scanf("%d", &num2);  // Take the second number as input

    // Adding the numbers
    sum = num1 + num2;

    // Showing the result
    printf("The sum is: %d\n", sum);

    return 0;  // End of program
}
