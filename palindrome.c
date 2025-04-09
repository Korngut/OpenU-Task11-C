#include <stdio.h>
#include <string.h>

void palindrome() {
    char input[81];
    int left, right;

    printf("Please enter a string to check if it's a palindrome:\n");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return;
    }

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n')
        input[len - 1] = '\0';

    printf("The entered string is: \"%s\"\n", input);

    left = 0;
    right = strlen(input) - 1;

    while (left < right) {
        while (left < right && (input[left] == ' ' || input[left] == '\t'))
            left++;
        while (left < right && (input[right] == ' ' || input[right] == '\t'))
            right--;
        if (input[left] != input[right]) {
            printf("NO\n");
            return;
        }
        left++;
        right--;
    }

    printf("YES\n");
}
