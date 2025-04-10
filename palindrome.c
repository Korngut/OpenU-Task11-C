#include <stdio.h>
#include <string.h>

int palindrome(const char *input) {
    int left = 0, right = strlen(input) - 1;

    while (left < right) {
        while (left < right && (input[left] == ' ' || input[left] == '\t')) {
            left++;
        }
        while (left < right && (input[right] == ' ' || input[right] == '\t')) {
            right--;
        }

        char leftChar = input[left];
        char rightChar = input[right];

        if (leftChar >= 'A' && leftChar <= 'Z') {
            leftChar += 'a' - 'A';
        }
        if (rightChar >= 'A' && rightChar <= 'Z') {
            rightChar += 'a' - 'A';
        }

        if (leftChar != rightChar) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

//int main() {
//    char input[81];
//
//    printf("Please enter a string to check if it's a palindrome:\n");
//    if (fgets(input, sizeof(input), stdin) == NULL) {
//        printf("Error reading input.\n");
//        return 1;
//    }
//
//    size_t len = strlen(input);
//    if (len > 0 && input[len - 1] == '\n') {
//        input[len - 1] = '\0';
//    }
//
//    printf("The entered string is: \"%s\"\n", input);
//
//    if (palindrome(input)) {
//        printf("The string is a palindrome.\n");
//    } else {
//        printf("The string is NOT a palindrome.\n");
//    }
//
//    return 0;
//}
//