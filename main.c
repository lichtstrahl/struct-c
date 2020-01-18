#include <stdio.h>
#include <stdlib.h>
#define DEBUG
#include "debug.h"
#include "list/list.h"

#define SIZE_INT sizeof(int)

int main() {
    int a = 0;

    list_node n1 = {.content = "text1", .next = NULL};
    list_node n2 = {.content = "text2", .next = NULL};

    PRINT_STR((char*)n1.content);
    PRINT_STR((char*)n2.content);

    int* start_value = (int*)malloc(SIZE_INT);
    *start_value = 0;
    list_node start = {.content = start_value, .next = NULL};

    int* tmp_value = (int*)malloc(SIZE_INT);
    *tmp_value = 1;
    list_node tmp = {.content = tmp_value, .next = NULL};
    node_add(&start, &tmp);

    PRINT_SEP_DEFAULT;
    for (list_node *i = &start; i != NULL; i = i->next)
        PRINT_INT(*(int*)i->content);
    PRINT_SEP(5);
    PRINT_INT(list_size(&start));


    for (int i = 0; i < 5; i++) {
        int* tmp_value_2 = (int*)malloc(SIZE_INT);
        *tmp_value_2 = (i+1)*10;
        list_node* tmp_2 = (list_node*)malloc(sizeof(list_node));
        tmp_2->content = tmp_value_2;
        list_add(&start, tmp_2);
    }


    PRINT_SEP(50);
    for (list_node *i = &start; i != NULL; i = i->next)
        PRINT_INT(*(int*)i->content);
    PRINT_SEP(50);
    PRINT_INT(list_size(&start));

    return a;
}