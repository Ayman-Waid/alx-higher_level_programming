#ifndef MY_CUSTOM_LISTS_H
#define MY_CUSTOM_LISTS_H

#include <stdlib.h>

/**
 * struct my_custom_list_node - singly linked list
 * @value: integer
 * @next_node: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct my_custom_list_node
{
    int value;
    struct my_custom_list_node *next_node;
} my_custom_list_node_t;

/**
 * print_my_custom_list - Prints all the elements of a my_custom_list_node_t list
 * @head: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_my_custom_list(const my_custom_list_node_t *head);

/**
 * add_node_to_my_custom_list - Adds a new node at the beginning of a my_custom_list_node_t list
 * @head: Pointer to the head of the list
 * @value: Value to set in the new node
 * Return: Address of the new element, or NULL if it failed
 */
my_custom_list_node_t *add_node_to_my_custom_list(my_custom_list_node_t **head, const int value);

/**
 * free_my_custom_list - Frees a my_custom_list_node_t list
 * @head: Pointer to the head of the list
 */
void free_my_custom_list(my_custom_list_node_t *head);

/**
 * check_my_custom_list_for_cycle - Checks if a linked list has a cycle in it
 * @list: Pointer to the head of the list
 * Return: 1 if there is a cycle, 0 otherwise
 */
int check_my_custom_list_for_cycle(my_custom_list_node_t *list);

#endif /* MY_CUSTOM_LISTS_H */
