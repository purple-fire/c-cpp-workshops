#include <stdio.h>

int main()
{
    // This is a comment
    printf("Hello World!\n"); // This is a comment too
    
    /**
     * This is a multiline, or block comment
     * and can be used to write multiple lines,
     * such as in function documentation.
     */
    printf("\t\\Hi!\n" /* Block comments can even be within expressions */);
    printf("\"According to all known laws of aviation...\"\n\n");
    
    // Comments can be used for documentation...
    // Printing backslash-escape sequences
    printf("Byte 077 (octal): \077\n");
    printf("Byte  3f (hex):   \x3f\n");
    // or removing temporarily unwanted code
    // printf("???:\a");
    printf("\n");
    
    
    // Whitespace doesn't matter in most of C:
    int i;i=1;i=i+10;printf("%d\n",i);
    // But it usually makes things easier to read...
    printf("\n");
    
    
    // Variables are given a type and name
    // vvv  type - int, or integer
    //     vvvvvvvvv  name - my_number (case-sensitive)
    //               v vv  optional assignment - initializing to 15
       int my_number = 15;
       int your_number;
    
    // Variables can be used in functions
    //             vv  printf uses a special notation for the type of varaible
    printf("Mine:  %d\n", my_number);
    printf("Yours: %d\n", your_number); // Don't do this :P
    printf("\n");
    
    // You can change variables anywhere after they are declared
    your_number = 10;                       printf("%d\n", your_number);
    your_number = my_number + 1;            printf("%d\n", your_number);
    your_number = my_number + your_number;  printf("%d\n", your_number);
}
