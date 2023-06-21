#include "monty.h"

/**
 * run_monty - run the monty interactive
 *
 * @file: file to be run
 *
 * Return: line to be run
 */

void run_monty(FILE *file)
{
	char opcode[100], line[100];
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	while (fgets(line, sizeof(line), file))
	{
		if (sscanf(line, "%99s", opcode) != 1)
		{
			fprintf(stderr, "Error: L%d: invalid instruction format\n",
					line_number);
			fclose(file);
			exit(EXIT_FAILURE);
		}

		if (strcmp(opcode, "push") == 0)
		{
			push(&stack, line_number);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&stack, line_number);
		}
		else
		{
			fprintf(stderr, "Error: L%d: unknown instruction %s\n",
				line_number, opcode);
			fclose(file);
			exit(EXIT_FAILURE);
		}

		line_number++;
	}
}
