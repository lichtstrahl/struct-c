//
// Created by igor on 18.01.20.
//

#ifndef TREE_LIST_H
#define TREE_LIST_H

#include "node.h"
#include "../command/command.h"

// Присоединение одного узла (n2) к другому (n1)
void node_add(list_node* n1, list_node* n2);

// Присоединение к последнему элементу
void list_add(list_node* start, list_node* new);

// Длина списка
int list_size(list_node* start);

// Сортировка списка
void list_sort(list_node *start);

// Сортировка произвольного списка
void list_sort_cmp(list_node *start, compare cmp);

#endif //TREE_LIST_H
