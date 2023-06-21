#include "monty.h"

/**
 * run_monty - run the monty interactive
 *
 * @file: file to be run
 * @stack: struct stack
 *
 * Return: line to be run
 */

void run_monty(FILE *file, stack_t **stack)
{
	char line[100], *token;
	unsigned int line_number = 0;

	while (fgets(line, sizeof(line), file))
	{
		line_number++;

		token = strtok(line, " \n");
		if (!token || !(*token))
			continue;

		if (strcmp(token, "push") == 0)
			push(stack, line_number);
		else if (strcmp(token, "pall") == 0)
			pall(stack, line_number);
		else
		{
			fprintf(stderr, "Error: L%d: unknown instruction %s\n",
				line_number, token);
			fclose(file);
			exit(EXIT_FAILURE);
		}
	}

	fclose(file);
	exit(EXIT_SUCCESS);
}
