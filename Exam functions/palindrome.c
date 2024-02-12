#include <stdio.h>
#include <stdbool.h>

// Function to check if an array is a palindrome
bool isPalindrome(const char *array, int size) {
    // Initialize pointers to the start and end of the array
    int start = 0;
    int end = size - 1;

    // Compare characters from both ends towards the center
    while (start < end) {
        // If characters at the current positions are not equal, it's not a palindrome
        if (array[start] != array[end]) {
            return false;
        }

        // Move pointers towards the center
        start++;
        end--;
    }

    // If the loop completes without returning, the array is a palindrome
    return true;
}

int main() {
    // Set a maximum array size for simplicity
    const int maxSize = 100;

    // Declare an array to store user input
    char inputArray[maxSize];

    // Get input from the user
    printf("Enter a string: ");
    fgets(inputArray, maxSize, stdin);

    // Calculate the size of the entered string
    int size = 0;
    while (inputArray[size] != '\0' && inputArray[size] != '\n') {
        size++;
    }

    // Call the function to check if the array is a palindrome
    if (isPalindrome(inputArray, size)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
