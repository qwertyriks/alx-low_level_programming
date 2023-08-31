#ifndef LISTS_H
#define LISTS_H

/**
 *  * struct list_s - Singly linked list
 *   * @str: String - (malloc'ed string)
 *    * @len: Length of the string
 *     * @next: Points to the next node
 *      *
 *       * Description: Singly linked list node structure
 *        * for Holberton project
 *         **/
typedef struct list_s
{
		char *str;
			unsigned int len;
				struct list_s *next;
} list_t;

/**
 *  * print_list - Prints all the elements of a list_t list
 *   * @h: Pointer to the head of the list
 *    * Return: Number of nodes in the list
 *     **/
size_t print_list(const list_t *h);

/**
 *  * list_len - Counts the number of elements in a linked list
 *   * @h: Pointer to the head of the list
 *    * Return: Number of nodes in the list
 *     **/
size_t list_len(const list_t *h);

/**
 *  * add_node - Adds a new node at the beginning of a list_t list
 *   * @head: Double pointer to the head of the list
 *    * @str: String to be copied into the new node
 *     * Return: Address of the new element or NULL if it failed
 *      **/
list_t *add_node(list_t **head, const char *str);

/**
 *  * add_node_end - Adds a new node at the end of a list_t list
 *   * @head: Double pointer to the head of the list
 *    * @str: String to be copied into the new node
 *     * Return: Address of the new element or NULL if it failed
 *      **/
list_t *add_node_end(list_t **head, const char *str);

/**
 *  * free_list - Frees a list_t list
 *   * @head: Pointer to the head of the list to be freed
 *    **/
void free_list(list_t *head);

#endif

