#include <stdio.h>

// Function to count the number of zero bits in a 32-bit unsigned integer
unsigned int count_bits(unsigned int num) {
    unsigned int count = 0;
    unsigned int total_bits = 32;  // Number of bits in an unsigned int

    // Loop through all 32 bits
    for (unsigned int i = 0; i < total_bits; i++) {
        // Right shift the number by 'i' positions, then check if the bit at that position is 0
        if (((num >> i) & 1) == 0) {
            count++;  // Increment count if the bit is 0
        }
    }

    return count;  // Return the total number of zero bits
}

int main() {
    unsigned int num;

    // Prompt the user to enter a number
    printf("Please enter an unsigned integer number (in decimal): ");
    scanf("%u", &num);  // Read the number from user input

    // Display the entered number
    printf("The number you entered: %u\n", num);

    // Call the function to count zero bits
    unsigned int zero_bits = count_bits(num);

    // Print the result
    printf("Number of zero bits: %u\n", zero_bits);

    return 0;  // Indicate that the program ended successfully
}
