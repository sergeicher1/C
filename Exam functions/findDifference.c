#include <stdio.h>

// Function to find the difference between the smallest and largest digits
int findDifference(int num) {
    int smallest = 9;  // Initialize with a value larger than any digit
    int largest = 0;   // Initialize with a value smaller than any digit

    // Process each digit of the input number
    while (num > 0) {
        int digit = num % 10;  // Extract the last digit

        // Update the smallest digit
        if (digit < smallest) {
            smallest = digit;
        }

        // Update the largest digit
        if (digit > largest) {
            largest = digit;
        }

        // Move to the next digit
        num /= 10;
    }

    // Calculate and return the difference between the smallest and largest digits
    return largest - smallest;
}

int main() {
    int inputNumber;

    // Get input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &inputNumber);

    // Check if the input is non-negative
    if (inputNumber >= 0) {
        // Call the function to find the difference and display the result
        int result = findDifference(inputNumber);
        printf("The difference between the smallest and largest digits is: %d\n", result);
    } else {
        // Display an error message if the input is negative
        printf("Please enter a non-negative integer.\n");
    }

    return 0;
}
