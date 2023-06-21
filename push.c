#include "monty.h"

/**
 * push - the push function
 *
 * @stack: pointer to stack pointer
 * @line_number: line Number
 *
 * Return: new node from stack
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL, *new_node;

	(void)line_number;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = data_;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		return;
	}
	top = *stack;
	top->prev = new_node;
	new_node->next = top;
	*stack = new_node;
	return;
}
