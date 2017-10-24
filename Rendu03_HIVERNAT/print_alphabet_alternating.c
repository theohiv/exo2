#include <stdio.h>

void print_alphabet_alternating(void)
{
	char lettre = 'a';
	while (lettre <= 'z')
{
		printf("%c", lettre);
		lettre++;

		if (lettre < 96)
	lettre = lettre + 32;
		else 
	lettre = lettre - 32;

}
printf("\n");
}
