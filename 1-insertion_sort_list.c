#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
* swap_nodes - swaps two nodes
* @list: head of the list
* @left: left node to swap
* @right: Pointer to the right node to swap
*/
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
if (left->prev)
left->prev->next = right;
if (right->next)
right->next->prev = left;
right->prev = left->prev;
left->next = right->next;
left->prev = right;
right->next = left;
if (!right->prev)
*list = right;
}
/**
* insertion_sort_list - insertion sort algorithm
* @list: head of the list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insert;

if (!list || !*list || !(*list)->next)
return;
current = (*list)->next;
while (current != NULL)
{
insert = current;
while (insert->prev != NULL && insert->n < insert->prev->n)
{
swap_nodes(list, insert->prev, insert);
print_list(*list);
}
current = current->next;
}
}
