#include <stdio.h>

// Define array sizes as macros to ensure fixed size at compile time
#define FLT_ARR_SIZE 10
#define MD_ARR_SIZE 4

// Function prototypes
void init_flt_arr(float[], size_t);

int main(void) {
    // Create and initialize array
    int int_arr[] = { 2, 42, 9, 2, 100, 17 };
    // Change some array elements
    int_arr[2] = 15;
    int_arr[4] = int_arr[1] * 3;
    // Determine the size of the array (total size / size of int)
    size_t int_arr_size = sizeof(int_arr) / sizeof(int_arr[0]);
    // Print the array elements
	for (size_t i = 0; i < int_arr_size; i++) {
		printf("%d\n", int_arr[i]);
	}
    puts("");

    // Create an array, but do not initialize it
	float flt_arr[FLT_ARR_SIZE];
    // Initialize the array using a function
    init_flt_arr(flt_arr, FLT_ARR_SIZE);
    // Print the array elements reversed
	for (size_t i = FLT_ARR_SIZE - 1; i > 0; i--) {
		printf("%.1f\n", flt_arr[i]);
	}
    puts("");

    // Create and initialize a string
    char string[] = "Simple string";
    puts(string);
    // The string is 14 bytes long, but "Simple string" has only 13 letters
    printf("String size: %lu\n", sizeof(string));
    // A literal string always ends with a null terminator (the character zero)
	for (size_t i = 0; i < sizeof(string); i++) {
		printf("%3d = '%c'\n", string[i], string[i]);
	}
    puts("");

    // Create and initialize a 2D array
    char md_arr[MD_ARR_SIZE][MD_ARR_SIZE] = {
        {'+','-','-','+'},
        {'|','2','0','|'},
        {'|','2','5','|'},
        {'+','-','-','+'},
    };
    // Print the 2D array
	for (size_t i = 0; i < MD_ARR_SIZE; i++) {
        for (size_t j = 0; j < MD_ARR_SIZE; j++) {
            printf("%c", md_arr[i][j]);
        }
        printf("\n");
	}
}

// Function to initialize a float array
void init_flt_arr(float arr[], size_t size) {
	for (size_t i = 0; i < size; i++) {
		arr[i] = 1.0 + i / 10.0;
	}
}