#include "main.h"

/**
 * errors - prints errors based on cases
 * @error: error number associated with perror statement
 * Return: void
 */

void errors(int error)
{
	switch (error)
	{
	case 1: /* writes the fork error to stderr */
		write(STDERR_FILENO, ERR_FORK, _strlen(ERR_FORK));
		perror("Error");
		break;

	case 2: /* writes the execve error to stderr */
		perror("Error");
		break;

	case 3: /* writes malloc error to stderr */
		write(STDERR_FILENO, ERR_MALLOC, _strlen(ERR_MALLOC));
		break;
	case 4: /* writes the empty path error to stderr */
		write(STDERR_FILENO, ERR_PATH, _strlen(ERR_PATH));
		break;

	default:
		return;
	}
}
