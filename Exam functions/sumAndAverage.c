#include <stdio.h>

// Function to calculate the sum of values at odd indices and return the average of all elements
float calculateAverageAndSum(int array[], int size, int *sumOddIndices) {
    // Initialize variables for sum and count
    int sum = 0;
    int count = 0;

    // Iterate through the array
    for (int i = 0; i < size; ++i) {
        // Check if the index is odd
        if (i % 2 == 1) {
            // Add the value at the odd index to the sum
            *sumOddIndices += array[i];
        }

        // Add the current element to the total sum
        sum += array[i];
        // Increment the count for calculating the average
        count++;
    }

    // Return the average of all elements in the array
    return (float) sum / count;
}

int main() {
    // Set a maximum array size for simplicity
    const int maxSize = 10;

    // Declare an array to store user input
    int inputArray[maxSize];

    // Get input from the user
    printf("Enter %d integers:\n", maxSize);
    for (int i = 0; i < maxSize; ++i) {
        printf("Element %d: ", i);
        scanf("%d", &inputArray[i]);
    }

    // Initialize variables for the sum of values at odd indices and the average
    int sumOddIndices = 0;
    float average = calculateAverageAndSum(inputArray, maxSize, &sumOddIndices);

    // Print the sum of values at odd indices
    printf("Sum of values at odd indices: %d\n", sumOddIndices);

    // Print the average of all elements in the array
    printf("Average of all elements: %.2f\n", average);

    return 0;
}
