#include <stdio.h>

int main()
{
    int counter = 0;
    
    printf("Loop 1: ");
    // The condition in this loop is always true,
    // but the loop will exit when it reaches the break.
    while (1 == 1) {
        printf("%i ", ++counter);
        if (counter > 5) {
            break;
        }
    }
    puts("");
}
