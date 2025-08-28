#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two numbers
    printf("Enter numerator: ");
    scanf("%f", &num1);

    printf("Enter denominator: ");
    scanf("%f", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Result = %.2f\n", result);
    }

    return 0;
}