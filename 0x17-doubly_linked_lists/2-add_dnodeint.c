#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Set the data for the new node */
    new_node->n = n;
    new_node->prev = NULL;

    /* Link the new node to the existing list */
    new_node->next = *head;

    /* If the list is not empty, update the previous pointer of the old head */
    if (*head != NULL)
        (*head)->prev = new_node;

    /* Update the head to point to the new node */
    *head = new_node;

    return (new_node);
}
