#include <stdio.h>
#include "lists.h"

/**
* display_custom_list - prints all the elements of a linked list
* @head: pointer to the custom_list_t list to display
*
* Return: the number of nodes displayed
*/
size_t display_custom_list(const custom_list_t *head)
{
size_t node_count = 0;

while (head)
{
if (!head->data)
printf("[Empty] (nil)\n");
else
printf("[Size: %zu] %s\n", head->data_length, head->data);
head = head->next_node;
node_count++;
}

return node_count;
}

