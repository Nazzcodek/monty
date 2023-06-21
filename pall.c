#include "monty.h"

/**
 * pall - pall function
 *
 * @stack: pointer to stack pointer
 *
 * @line_number: line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (!stack)
	{
		fprintf(stderr, "Error: L%d: Stack not initialized\n", line_number);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
