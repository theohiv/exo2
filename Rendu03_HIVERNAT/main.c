/******************************************************************************
 *                                B1 THEMA INFO                                *
 *                              Rendu_03 - main.c                              *
 ******************************************************************************/

#include <stdio.h>  //this library is for printf();
#include <unistd.h>  //this libraryry is needed for write();


void print_alphabet_lowercase(void); // Prototype niveau_01

void print_alphabet_alternating(void); // Prototype niveau_02

void print_letter_repeating(char c); // Prototype niveau_03

// enleve les // en bas si vous voulez tenter niveau_04
 void print_letter_ascii_value(char c); //Prototype niveau_04

void printchar(char c) // This function can be used for exercises 1-3
{
	write (1, &c, 1 );
}

int length(char *c)  // This function gets the length of the input to main.
{
	int len = 0;
	while (*c)
	{
		c++;
		len++;
	}
	return (len);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argc > 2 || length(argv[1]) > 1 )
		{
			printf("Input too long. Please input just one character.\n");
			return (0);
		}
		print_letter_ascii_value(*argv[1]);
		print_letter_repeating(*argv[1]);
		return (0);
	}
		print_alphabet_lowercase();
		print_alphabet_alternating();
	return (0);
}
