#include <stdio.h>

int main()
{
    /**
     * Try changing the values of these variables to
     * see how the conditional statements behave!
     */
    int int1 = 0;
    int int2 = 0;
    int int3 = 0;
    float flt1 = 0.0;
    float flt2 = 0.0;
    float flt3 = 0.0;
    
    /**
     * Try changing the operations in the conditional statements
     * to see how you can change the flow of the program!
     */
    puts("Integer condition:");
    if (int1 == int2) {
        puts("True");
    } else {
        puts("False");
    }
    puts("Float condition:");
    if (flt1 == flt2) {
        puts("True");
    } else {
        puts("False");
    }
    puts("Chained condition:");
    if (int1) {
        puts("1");
    } else if (int2) {
        puts("2");
    } else if (int3) {
        puts("3");
    } else {
        puts("Else");
    }
    puts("Custom condition:");
    if (0 == 0) {
        puts("True");
    } else {
        puts("False");
    }
    puts("");
    
    /**
     * A few interesting conditions to try:
     *   if (!0)...
     *   if (int1 < int2 && int2 < int3)...
     *   if (int1 != int2 && int2 != int3 && int1 != int3)...
     *   if ('A' == 65)...
     *   if (3 > 2 > 1)...
     *   if ("2" > "1")...
     *   if (puts("Hi!"))...
     *   if (1 || puts("Hi!"))...
     */
    
    // Floating point error? I hardly know 'er!
    printf("%.32f\n", 0.1 + 0.2);
    printf("%.32f\n", 0.3);
}
