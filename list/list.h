//
// Created by igor on 18.01.20.
//

#ifndef TREE_LIST_H
#define TREE_LIST_H

// Структура данных для узла
typedef struct list_node_t {
    void* content;
    struct list_node_t *next;
} list_node;

// Присоединение одного узла (n2) к другому (n1)
void list_add(list_node *n1, list_node *n2);

#endif //TREE_LIST_H
