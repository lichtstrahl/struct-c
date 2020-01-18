#ifndef TREE_COMMAND_H
#define TREE_COMMAND_H

#include "../list/node.h"

/**
 * @return >0 Если первый аргумент больше. =0 Если равны. <0 Если второй аргумент больше.
 */
typedef int(*compare)(list_node *n1, list_node *n2);

#endif