#include "list.h"

// Присоединение одного узла (n2) к другому (n1)
void list_add(list_node *n1, list_node *n2)
{
    n1->next = n2;
}

