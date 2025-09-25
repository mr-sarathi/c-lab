#include <stdio.h> // Required for input/output functions like printf and scanf

int main() {
    int number;
    int square;
    int cube;

    // Prompt the user to enter a number
    printf("Enter an integer: ");

    // Read the integer from the user and store it in the 'number' variable
    scanf("%d", &number);

    // Calculate the square of the number
    square = number * number;

    // Calculate the cube of the number
    cube = number * number * number;

    // Display the calculated square and cube
    printf("Square of %d is: %d\n", number, square);
    printf("Cube of %d is: %d\n", number, cube);

    return 0; // Indicate successful program execution
}
