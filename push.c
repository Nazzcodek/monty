#include "monty.h"

/**
 * push - the push function
 *
 * @stack: pointer to stack pointer
 * @line_number: line Number
 *
 * Return: new node from stack
 */

void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *current;

	if (!stack)
	{
		fprintf(stderr, "Error: Stack not initialized\n");
		exit(1);
	}
	current = malloc(sizeof(stack_t));
	if (current == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(1);
	}

	current->n = num;
	current->prev = NULL;

	
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
