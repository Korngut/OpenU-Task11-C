palindrome: main.o palindrome.o
	gcc -Wall -Werror -std=c99 main.o palindrome.o -o palindrome

count_bits: count_zero_bits.o
	gcc -Wall -Werror -std=c99 count_zero_bits.o -o count_bits

main.o: main.c
	gcc -Wall -Werror -std=c99 -c main.c

palindrome.o: palindrome.c
	gcc -Wall -Werror -std=c99 -c palindrome.c

count_zero_bits.o: count_zero_bits.c
	gcc -Wall -Werror -std=c99 -c count_zero_bits.c