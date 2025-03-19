#include <stdio.h>

// Create a custom data type "Student"
struct Student {
    int age;
	int studentID;
};

// Create an aliased custom data type "Rectangle"
typedef struct Rectangle {
	double width;
	double height;
	int color;
} Rectangle;

// Function prototypes
double getPerimeter(Rectangle rect);
Rectangle createRectangle(double width, double height);


int main(void) {
    struct Student student1;
	struct Student student2 = { 19, 12345 };
	struct Student student3 = { .studentID = 13579, .age = 18 };

	printf("The student's ID is %d\n", student2.studentID);
	printf("The student is %d years old\n", student2.age);
	puts("");

	printf("The student's ID is %d\n", student3.studentID);
	printf("The student is %d years old\n", student3.age);
	puts("");

	student1.age = 22;
	student1.studentID = 98765;
	printf("The student's ID is %d\n", student1.studentID);
	printf("The student is %d years old\n", student1.age);
	puts("");


    Rectangle rect1 = createRectangle(15, 10.3);
    rect1.color = 256;
	puts("Rectangle data:");
    printf("Width: %.2f  Height: %.2f  Color code: %d\n", rect1.width, rect1.height, rect1.color);
	printf("Rectangle perimeter is %.3lf\n", getPerimeter(rect1));
}


double getPerimeter(Rectangle rect) {
	return 2 * rect.width + 2 * rect.height;
}

Rectangle createRectangle(double width, double height) {
	Rectangle rect;
	rect.width = width;
	rect.height = height;
	return rect;
}