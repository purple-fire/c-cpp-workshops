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
    
    printf("Loop 2: ");
    // Which numbers do you think will print?
    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0) {
            continue;
        } else if (i > 7) {
            break;
        }
        printf("%d ", i);
    }
    puts("");
    
    printf("Loop 3: ");
    // The condition in this loop is always false,
    // but a do-while loop always runs once.
    do {
        printf("%i ", ++counter);
    } while (0 == 1);
    puts("");
}
