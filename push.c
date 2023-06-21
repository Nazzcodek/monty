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
	stack_t *new_node;
	char *arg = strtok(NULL, " \n");
	int value = atoi(arg);

	printf("Stack value: %p\n", (void*)*stack);

	if (!(*stack))
	{
		fprintf(stderr, "Error: L%d: Stack not initialized\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: L%d: malloc failed\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (!arg || !(*arg))
	{
		fprintf(stderr, "Error: L%d: usage: push integer\n", line_number);
		free(new_node);
		exit(EXIT_FAILURE);
	}

	if (value == 0 && *arg != '0')
	{
		fprintf(stderr, "Error: L%d: usage: push integer\n", line_number);
		free(new_node);
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
