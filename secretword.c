#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to apply cipher using XOR
 *
 * Return: return 0
 */

int main(int argc, char **argv)
{
	char letter;
	char key;
	int keynumber, keylength, nchars=0;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s key\n", argv[0]);
	exit(1);
	}

	keylength = strlen(argv[1]);

	while (scanf("%c", &letter) != EOF)
	{
	keynumber = nchars%keylength;
	key = argv[1][keynumber];
	printf("%c", letter^key);
	nchars++;
	}
	return (0);
}
