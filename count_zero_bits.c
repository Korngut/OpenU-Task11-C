#include <stdio.h>

unsigned int count_bits(unsigned int num) {
    unsigned int count = 0;
    unsigned int total_bits = 32;

    for (unsigned int i = 0; i < total_bits; i++) {
        if (((num >> i) & 1) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    unsigned int num;

    printf("Please enter an unsigned integer number (in decimal): ");
    scanf("%u", &num);

    printf("The number you entered: %u\n", num);

    unsigned int zero_bits = count_bits(num);
    printf("Number of zero bits: %u\n", zero_bits);

    return 0;
}
