#include <stdio.h>

void print_letter_repeating(char **argv)
{
	int valeur = 0;
	int i=0;

	int x = argv;
	valeur = x - 96;
	for(i = 0;i<valeur;i++)
	{
		printf("%c",x);
	}
	printf("\n");

}