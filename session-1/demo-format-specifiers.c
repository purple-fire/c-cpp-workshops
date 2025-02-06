#include <stdio.h>

int main()
{
    unsigned char var1 = 'A';
    unsigned char var2 = 100;
    unsigned char var3 = 200;
    
    printf("Var 1 - Char: %c  Decimal: %d  Octal: %o  Hex: %x\n", var1, var1, var1, var1);
    printf("Var 2 - Char: %c  Decimal: %d  Octal: %o  Hex: %x\n", var2, var2, var2, var2);
    printf("Var 3 - Char: %c  Decimal: %d  Octal: %o  Hex: %x %X\n", var3, var3, var3, var3, var3);
    
    /**
     * Prints a table of shop items
     */
    puts("")
	puts("||========================================||");
	puts("||Shop Item Name|Price($)|Quantity|ID Num.||");
	puts("||========================================||");
	printf("||%-14s|%+8.2f|%8d|%07d||\n", "Mouse", 9.5, 10, 15);
	printf("||%-14s|%+8.2f|%8d|%07d||\n", "Keyboard", 15.30, 300, 27);
	printf("||%-14s|%+8.2f|%8d|%07d||\n", "4D Hypercube", 1.0/0.0, -0xffff, 01337);
	puts("||----------------------------------------||");
}
