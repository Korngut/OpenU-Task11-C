#include <stdio.h>

int palindrome(const char *input) {
    int left = 0, right = 0;

    while (input[right] != '\0') {
        right++;
    }
    right--;

    while (left < right) {
        while (left < right && (input[left] == ' ' || input[left] == '\t')) {
            left++;
        }
        while (left < right && (input[right] == ' ' || input[right] == '\t')) {
            right--;
        }

        if (input[left] != input[right]) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {
    char input[81];

    printf("Please enter a string to check if it's a palindrome:\n");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    int len = 0;
    while (input[len] != '\0') {
        len++;
    }
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("The entered string is: \"%s\"\n", input);

    palindrome(input);

    return 0;
}


