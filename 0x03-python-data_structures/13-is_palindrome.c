#include "lists.h"


/**
 * is_palindrome - checks if a linked list is a palindrom
 * @head: poinyer to a linked list
 * Return: 1 or 0
 */

int is_palindrome(listint_t **head)
{
	int len, i, *array;
	listint_t  *copy;

	if (*head == NULL)
		return (1);
	copy = (*head);
	for (len = 0; copy->next != NULL; len++)
	{
		copy = copy->next;
	}
	array = (int *)malloc(sizeof(int) * len);
	for (i = 0; i <= len; i++)
	{
		array[i] = (*head)->n;
		*head = (*head)->next;
	}
	for (i = 0; i <= len / 2; i++)
	{
		if (array[i] != array[len])
		{
			free(array);
			return (0);
		}
		len--;
	}
	free(array);
	return (1);
}
