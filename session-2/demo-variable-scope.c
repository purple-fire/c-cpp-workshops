#include <stdio.h>

// Variables in the file scope are implicitly "extern"
int global = 0;

// Functions are implicitly "extern" by default
void foo() {
    
}
// Functions can also be explicitly declared as "extern"
extern void bar() {

}

int main() {
    int local = 1;
    // A local scope contains "extern" and locally declared variables
    printf("l: %d\n", local);
    printf("g: %d\n", global);

    foo();
    bar();
}
