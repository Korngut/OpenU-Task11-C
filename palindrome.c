#include <stdio.h>
#include <string.h>

// Function to check if a given string is a palindrome
// Ignores spaces, tabs, and is case-insensitive
int palindrome(const char *input) {
    int left = 0, right = strlen(input) - 1;

    // Move pointers from both ends towards the center
    while (left < right) {
        // Skip spaces and tabs on the left side
        while (left < right && (input[left] == ' ' || input[left] == '\t')) {
            left++;
        }

        // Skip spaces and tabs on the right side
        while (left < right && (input[right] == ' ' || input[right] == '\t')) {
            right--;
        }

        char leftChar = input[left];
        char rightChar = input[right];

        // Convert uppercase letters to lowercase for comparison
        if (leftChar >= 'A' && leftChar <= 'Z') {
            leftChar += 'a' - 'A';
        }
        if (rightChar >= 'A' && rightChar <= 'Z') {
            rightChar += 'a' - 'A';
        }

        // If characters do not match, it's not a palindrome
        if (leftChar != rightChar) {
            return 0;
        }

        // Move both pointers inward
        left++;
        right--;
    }

    return 1; // If all characters matched, it's a palindrome
}

int main() {
    char input[81];

    // Ask the user to enter a string
    printf("Please enter a string to check if it's a palindrome:\n");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove the newline character at the end (if present)
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Display the entered string
    printf("The entered string is: \"%s\"\n", input);

    // Check and display whether the string is a palindrome
    if (palindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
