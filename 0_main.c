#include "ggmls.h"

/*
 * main - Main function for the first task to evaluate the _readir function
 *
 * @argc: Number of arguments
 * @argv: The arguments in a end NULLED array of char*
 *
 * Return: EXIT_SUCCESS when successfuli, EXIT_FAILURE in other case
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf ("Wrong number of arguments\n");
		printf ("Usage: %s <dir_name>\n", *argv);
		return (EXIT_FAILURE);
	}

	if (_readdir(argv[1]) == EXIT_FAILURE)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
