#include <iostream>
#include <iomanip>

// Ignore this for now
template<typename T> void print_number(T, bool flt=false);

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
    
    signed short signed_num_1 = 0;
    signed short signed_num_2 = 0;
    unsigned short unsigned_num_1 = 0;
    unsigned short unsigned_num_2 = 0;
    
    float floating_num_1 = 0.0;
    float floating_num_2 = 0.0;
    
    /**
     * These lines print the values of the variables above.
     * Comment them out to remove unwanted output.
     */
    puts("Different type bit representation:");
    print_number(verysmall_num);
    print_number(small_num);
    print_number(integer_num);
    print_number(large_num);
    print_number(decimal_num);
    print_number(double_num);
    puts("Signed/Unsigned representation:");
    print_number(signed_num_1);
    print_number(signed_num_2);
    print_number(unsigned_num_1);
    print_number(unsigned_num_2);
    puts("Floating point representation:");
    print_number(floating_num_1, true);
    print_number(floating_num_2, true);
}

/**
 * This function prints the numbers formatted for the demo.
 * You don't need to worry about how this works.
 */
template<typename T>
void print_number(T number, bool flt) {
    /**
     * Hey! Don't look in here! I said you don't need to worry about it!
     * In all seriousness though, you probably shouldn't copy this if you're
     * thinking about using it elsewhere; there are much better ways to
     * print the bits of a number than the hacky jank I used here.
     */
    char str[64];
    union { int i; T t; } u_i;
    union { long i; T t; } u_l;
    u_i.t = number; u_l.t = number;
    std::cout << "Number: " << std::setw(10) << number << "  "
              << "Size: " << sizeof number << " bytes  "
              << "Binary: ";
    for (int i = 0; i < sizeof number; i++) {
        for (int j = 0; j < 8; j++) {
            if (sizeof number <= 4)
                str[8 * i + j] = (u_i.i % 2 ? '1' : '0');
            else if (sizeof number == 8)
                str[8 * i + j] = (u_l.i % 2 ? '1' : '0');
            else
                break;
            u_i.i >>= 1; u_l.i >>= 1;
        }
    }
    for (int i = 8 * sizeof number - 1; i >= 0; i--) {
        if (!flt) {
            std::cout << str[i];
            if (i % 8 == 0) std::cout << " ";
        } else {
            std::cout << str[i];
            if (i == 8 * sizeof number - 1 || 
                i == 8 * sizeof number - 1 - 8 ||
                (i % 8 == 0 && i < 8 * sizeof number - 8)) std::cout << " ";
        }
    }
    std::cout << std::endl;
}
