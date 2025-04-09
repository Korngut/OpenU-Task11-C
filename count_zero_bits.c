#include <stdio.h>
#include <intrin.h>
#include "math.h"

int count_binary_zeros(int number) {
    int zeros_count = 0;
    int binary[32];

    int abs_number = abs(number);
    for (int i = 31; i >= 0; --i) {
        int power_of_2 = pow(2, i);
        if (abs_number >= power_of_2) {
            binary[31 - i] = 1;
            abs_number -= power_of_2;
        } else {
            binary[31 - i] = 0;
        }
    }

    if (number < 0) {
        for (int i = 0; i < 32; ++i) {
            binary[i] = 1 - binary[i];
        }

        int carry = 1;

        for (int i = 31; i >= 0; --i) {
            int sum = binary[i] + carry;
            binary[i] = sum % 2;
            carry = sum / 2;
            if (carry == 0) {
                break;
            }
        }

    }

    for (int i = 0; i < 32; ++i) {
        if (binary[i] == 0) {
            zeros_count++;
        }
    }

    return zeros_count;
}
