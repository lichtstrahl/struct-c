#ifndef DEBUG_H
#define DEBUG_H

// Только если программа запущена в отладочном режиме
#ifdef DEBUG
#include <stdio.h>

// Печать целого числа
#define PRINT_INT(x) printf("%s: %5d\n", #x, x)
// Печать дробного числа
#define PRINT_FLT(x) printf("%s: %8.3lf\n", #x, x)
// Печать строки
#define PRINT_STR(x) printf("%s: \"%s\"\n", #x, x)
// Печать разделяющей строки
#define PRINT_SEP(x) \
    for (int i = 0; i < x; i++) printf("-");\
    printf("\n")
#define PRINT_SEP_DEFAULT PRINT_SEP(10)

#endif

#endif
