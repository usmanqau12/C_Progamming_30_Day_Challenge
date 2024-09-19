#include <stdio.h>

int main() {
    int num1, num2;

    // Asking the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);  // Take the first number as input

    printf("Enter the second number: ");
    scanf("%d", &num2);  // Take the second number as input

    // Displaying the two numbers
    printf("You entered: %d and %d\n", num1, num2);

    return 0;  // End of program
}
