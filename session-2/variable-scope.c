#include <stdio.h>
#include "variable-scope.h"

// This variable was declared "extern"
int state = 1;


// This function definition is "static"
static void static_func(void) {
    puts("Statically linked");
}

// This function definition is "extern"
void extern_func(void) {
    puts("Externally linked");
    printf("Size: %d  State: %d\n", size, state);
}

// This function definition is "extern" and calls a "static" function
extern void call_static(void) {
    static_func();
}
