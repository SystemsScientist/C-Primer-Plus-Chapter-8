// Exercise 1a, Chapter 8, C Primer Plus
//
// Device a program that counts the number
// number of characters in its input up to
// the end of file (EOF).
//
// Note: This is alternative and elaborate
// 	 version of Exercise 1
// 
//	 Reference Exercise 1, Chapter 7

#include <stdio.h>
#include <ctype.h>

int main(void) {

	int ch;
	int num_chars = 0;
	int num_spaces = 0;
	int num_newlines = 0;

	printf("Enter your text (press Enter and Ctrl-D to exit): \n");
	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			num_newlines++;
		else if (isspace(ch))
			num_spaces++;
		else
			num_chars++;
	}
	
	printf("Number of characters: %d\n", num_chars);
	printf("Number of spaces: %d\n", num_spaces);
	printf("Number of newlines: %d\n", num_newlines - 1); 

	return 0;
}
