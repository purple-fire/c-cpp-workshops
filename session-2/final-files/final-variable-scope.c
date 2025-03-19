#include <stdio.h>
#include "variable-scope.h"

// Variables in the file scope are implicitly "extern"
int global = 0;

// Functions are implicitly "extern" by default
void foo() {
    // Each function gets its own local scope
    // printf("l (foo): %d\n", local); // Fails to compile
    printf("g (foo): %d\n", global);
}
// Functions can also be explicitly declared as "extern"
extern void bar() {
    // Variables marked as "extern" can be accessed anywhere
    global = 3;
}

int main() {
    int local = 1;
    // A local scope contains "extern" and locally declared variables
    printf("l: %d\n", local);
    printf("g: %d\n", global);
    // A new "block" scope can be created using curly braces
    {
        // The block scope has access to variables in its parent
        printf("  l: %d\n", local);
        printf("  g: %d\n", global);
        int local = 2;
        int global = 3;
        // Variables can be shadowed if redeclared in a new scope
        printf("  l: %d\n", local);
        printf("  g: %d\n", global);
    }
    // The original variables are restored once the block exits
    printf("l: %d\n", local);
    printf("g: %d\n", global);
    
    foo();
    bar();
    printf("g: %d\n", global);
    puts("");

    // The "extern" functions in variable-scope.h can be accessed anywhere
    extern_func();
    // The "static" functions in variable-scope.h cannot be accessed here
    // static_func(); // Fails to compile
    // The "static" functions in variable-scope.h can still be accessed in variable-scope.c
    call_static();
    puts("");
    
    // There is only a single shared instance of each "extern" variable
    state = 2;
    printf("Changed extern state to %d\n", state);
    extern_func();
    // But each file gets its own copies of every "static" variable
    size = 10;
    printf("Changed static size to %d\n", size);
    extern_func();
}
