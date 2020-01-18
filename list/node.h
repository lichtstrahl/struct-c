//
// Created by igor on 18.01.20.
//

#ifndef TREE_NODE_H
#define TREE_NODE_H

// Структура данных для узла
typedef struct list_node_t {
    void* content;
    struct list_node_t *next;
    struct list_node_t *prev;
} list_node;
#endif //TREE_NODE_H
