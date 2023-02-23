#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints character cyphered
 *
 *
 * Return: returns 0 on success
 */

int main(int argc, char **argv)
{
	char *str, *strpd;
	char currentpost, position;

	if(argc != 2)
        {
	printf("Arguments More than %d\n", argc);
	exit(0);
	}

        str = malloc(sizeof(char)*strlen(argv[1]));
        if (str == NULL)
        {
        printf("Memory Not allocated \n");
        exit(0);
        }

        strpd = strcpy(str, argv[1]);

        int i = 0;
        while (strpd[i] != '\0')
        {
        if (strpd[i] >= 'a' && strpd[i] <= 'z')
        {
        currentpost = strpd[i] - 'a';
        position = (currentpost + 13) % 26;
	strpd[i] = 'a' + position;
	}
	if (strpd[i] >= 'A' && strpd[i] <= 'Z')
	{
        currentpost = (strpd[i] - 'A');
        position = (currentpost + 13) % 26;
        strpd[i] = 'A' + position;
	}
	printf("%c", strpd[i]);
	i++;
        }
	printf("\n");
	
	return (0);
	}
