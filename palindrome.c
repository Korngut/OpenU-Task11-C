#include <stdio.h>
#include <intrin.h>


int palindrome(char s[]) {
    int length = strlen(s);
    int left = 0;
    int right = length - 1;

    while (left < right) {

        while (left < right && (s[left] == ' ' || s[left] == '\t')) {
            left++;
        }

        while (left < right && (s[right] == ' ' || s[right] == '\t')) {
            right--;
        }

        if (s[left] != s[right]) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {
    char String[81];
    printf("Inset input: \n");

    fgets(String, 81, stdin);

    printf("%d", palindrome(String));;
    return 0;
}

