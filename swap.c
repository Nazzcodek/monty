#include "monty.h"

/**
 * swap - swap function
 *
 * @stack: pointer to stack pointer
 * @lin_number: stack line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *top1, *top2;

    if (*stack && (*stack)->next)
    {
        top1 = *stack;
        top2 = (*stack)->next;

        int temp = top1->n;
        top1->n = top2->n;
        top2->n = temp;
    }
    else
    {
        fprintf(stderr, "Error: L%d: can't swap, stack too short\n",
		line_number);
        exit(EXIT_FAILURE);
    }
}

