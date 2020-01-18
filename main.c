#include <stdio.h>
#define DEBUG

#include "debug.h"
#include "list/list.h"

int main() {
    int a = 0;

    list_node n1 = {.content = "text1", .next = NULL};
    list_node n2 = {.content = "text2", .next = NULL};

    PRINT_STR((char*)n1.content);
    PRINT_STR((char*)n2.content);

    return a;
}