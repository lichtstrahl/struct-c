//
// Created by igor on 18.01.20.
//

#ifndef TREE_LIST_H
#define TREE_LIST_H

// Структура данных для узла
typedef struct list_node_t {
    void* content;
    struct list_node_t *next;
    struct list_node_t *prev;
} list_node;

// Присоединение одного узла (n2) к другому (n1)
void node_add(list_node* n1, list_node* n2);

// Присоединение к последнему элементу
void list_add(list_node* start, list_node* new);

// Длина списка
int list_size(list_node* start);

// Сортировка списка
void list_sort(list_node *start);

#endif //TREE_LIST_H
