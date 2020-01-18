#include "list.h"
#include <stdlib.h>

// Присоединение одного узла (n2) к другому (n1)
void node_add(list_node *n1, list_node *n2)
{
    n1->next = n2;
    n2->prev = n1;
}


// Присоединение к последнему элементу
void list_add(list_node* start, list_node* new)
{
    list_node *cur;
    for (cur = start; cur->next; cur = cur->next)
        ;
    node_add(cur, new);
}

// Длина списка
int list_size(list_node* start)
{
    int size = 0;

    for (list_node* cur = start; cur; cur = cur->next)
        size++;

    return size;
}


// Сортировка списка (int)
void list_sort(list_node *start)
{
    list_node* cur = start;
    while (cur->next) {
        list_node *next = cur->next;
        list_node *prev = cur->prev;

        if (*(int*)next->content < *(int*)cur->content) {
            if (prev) {
                prev->next = next;
            }
            cur->next = next->next;
            next->next = cur;
            cur = prev;
        } else {
            cur = cur->next;
        }
    }
}
