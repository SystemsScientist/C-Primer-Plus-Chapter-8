// Exercise 1, Chapter 8, C Primer Plus
//
// Devise a program that counts the number
// of characters in its input up to the end
// of file (EOF).

#include <stdio.h>
#include <ctype.h>

int main(void) {

	int num_chars = 0;

	printf("Enter your text (press Enter and Ctrl-D to exit): \n");
	while (getchar() != EOF)
		num_chars++;
	printf("Number of characters: %d\n", num_chars);	

	return 0;
}
