#include <stdio.h>

int main()
{
    unsigned int user_input;
    int counter = 0;
    puts("Enter a number between 1 (low) and 5 (high) "
         "representing how much you like dogs:");
    scanf("%d", &user_input);
    
    switch (user_input) {
        case 0:
            puts("You must not be very good at reading directions.");
            break;
            
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
            
        case 9: counter++;
        case 8: counter++;
        case 7: counter++;
        case 6:
            counter++;
            printf("You must ");
            for (int i = 0; i < counter; i++) {
                printf("really ");
            }
            printf("love dogs!\n");
            break;
            
        // Bad Code Alert: This will get you fired if you do this at a job.
        // Just because C lets you do something doesn't mean you should.
        case 10:
            while (1 == 1) {
                puts("Dogs!");
                if (0 == 1) {
        case 11:
                    break;
                }
            }
            puts("You must love dogs enough to shatter the fabric of reality");
            break;
            
        default:
            puts("I'm not sure how to interpret this answer anymore.");
            break;
    }
}
