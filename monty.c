#include "monty.h"

/**
 * main - entry point to monty interactive
 *
 * @argc: argument
 * @argv: argument array pointer
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	run_monty(file);

	fclose(file);
	return (0);
}
