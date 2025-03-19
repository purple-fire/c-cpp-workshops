#include <stdio.h>

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
        int global = 3
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
}
