#include <stdio.h>

int main()
{
    unsigned int user_input;
    int counter = 0;
    puts("Enter a number between 1 (low) and 5 (high) "
         "representing how much you like dogs:");
    scanf("%d", &user_input);
    
    /**
     * This switch case will match whatever number the user enters.
     */
    switch (user_input) {
        case 1:
            puts("You must be a cat person.");
            break;
        case 2:
            puts("You must not like dogs very much... :(");
            break;
        case 3:
            puts("You must think that dogs are ok pets.");
            break;
        case 4:
            puts("You must think dogs make very good pets!");
            break;
        case 5:
            puts("You must love dogs!");
            break;
    }
}
