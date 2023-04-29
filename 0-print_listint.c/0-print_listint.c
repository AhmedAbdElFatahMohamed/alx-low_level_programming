#include <stdio.h>

/**
 * struct node - linked list node
 * @data: integer data for the node
 * @next: pointer to the next node
 */
typedef struct node {
    int data;
    struct node* next;
} node_t;

/**
 * print_list - prints all the elements of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_list(const node_t *head)
{
    size_t num = 0;
    const node_t* current = head;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        num++;
        current = current->next;
    }

    return num;
}
