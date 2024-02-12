#include <stdio.h>

// Function to print common divisors of two numbers
void printCommonDivisors(int x, int y) {
    // Find the smaller of the two numbers
    int smaller = (x < y) ? x : y;

    // Print header
    printf("Common divisors of %d and %d are: ", x, y);

    // Iterate from 1 to the smaller number
    for (int i = 1; i <= smaller; ++i) {
        // Check if both numbers are divisible by the current divisor
        if (x % i == 0 && y % i == 0) {
            printf("%d, ", i);  // Print the common divisor
        }
    }

    printf("\n");  // Move to the next line after printing the divisors
}

int main() {
    int x, y;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    // Call the function to print common divisors
    printCommonDivisors(x, y);

    return 0;
}
