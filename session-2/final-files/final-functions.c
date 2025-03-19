#include <stdio.h>

/**
 * Once a function is defined, you can call it elsewhere
 * in the program to run the statements inside it.
 */
void foo() {
    puts("foo");
}

/**
 * Functions can take data as arguments and return results 
 * using return statements.
 */
int double_it(int x) {
    return x * 2;
}

// Function prototypes
void print_to_zero(int);
float floatify(int);
void recursive_print_digits(int);


// Main function
int main() {
    foo();
    printf("%d\n", double_it(5));
    print_to_zero(5);
    float converted = floatify(10);
    printf("%f\n", converted);
    recursive_print_digits(2048);
}


/**
 * Functions can compartmentalize a complex procedure into a "black box", 
 * reducing the code clutter in the rest of the program.
 */
void print_to_zero(int num) {
    while (num > 0) {
        printf("%d ", num);
        num--;
    }
    puts("");
}

/**
 * Functions can take and return any types you need, but the call
 * to the function must exactly match the given parameters.
 */
float floatify(int i) {
    float f = i;
    return f;
}

/**
 * This function would be relatively simple to write as a loop, but
 * what if you wanted to print the digits backwards?
 * In a loop you would need extra variables and code to determine the 
 * length of the number, but modeling the problem as recursive allows 
 * us to make this change by moving only a single line!
 * Just move the printf call after the recursive case instead of before!
 */
void recursive_print_digits(int num) {
    int digit = num % 10;
    printf("%d\n", digit);
    if (num >= 10)
        recursive_print_digits(num / 10);
}