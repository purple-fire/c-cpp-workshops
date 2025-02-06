#include <iostream>

// Ignore this for now
template<typename T> void print_number(T);

int main()
{
    /**
     * Try changing the values of these variables to
     * see how they are stored on your actual machine!
     * 
     * What changes about them when you add 1? Add 2?
     * What about making them negative? Experiment!
     */
    char verysmall_num = 0;
    short small_num = 0;
    int integer_num = 0;
    long large_num = 0;
    float decimal_num = 0.0;
    double double_num = 0.0;
    
    signed short signed_num = 0;
    unsigned short unsigned_num = 0;
    
    
    
    /**
     * These lines print the values of the variables above.
     * Comment them out to remove unwanted output.
     */
    print_number(verysmall_num);
    print_number(small_num);
    print_number(integer_num);
    print_number(large_num);
    print_number(decimal_num);
    print_number(double_num);
    
    print_number(signed_num);
    print_number(unsigned_num);
}

/**
 * Theis function prints the numbers formatted for the demo.
 * You don't need to worry about how this works.
 */
template<typename T>
void print_number(T number) {
    std::cout << "Number: " << number << "  "
              << "Size: " << sizeof number << " bytes  "
              << "Binary:";
    for (int i = sizeof number - 1; i >= 0; i--) {
        std::cout << " ";
        for (int j = 8 - 1; j >= 0; j--)
            std::cout << ((long)number >> (8 * i + j) & 1);
    }
    std::cout << std::endl;
}
