#include "monty.h"

/**
 * pint - the pint function
 *
 * @stack: pointer to stack pointer
 * @line_number: stack number line
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "Error: L%d: can't pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

