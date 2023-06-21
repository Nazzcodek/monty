#include "monty.h"

int num;
/**
 * push - the push function
 *
 * @stack: pointer to stack pointer
 * @line_number: line Number
 *
 * Return: new node from stack
 */

void push_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = malloc(sizeof(stack_t));
	if (current == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(1);
	}

	current->n = num;
	current->prev = NULL;

	if (!stack)
		return (1);

	if (*stack == NULL)
	{
		current->next = NULL;
		*stack = current;
	}
	else
	{
		current->next = *stack;
		(*stack)->prev = current;
		*stack = current;
	}
}
