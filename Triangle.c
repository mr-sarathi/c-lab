#include <stdio.h>

int main() {
    int i, j, rows;

    // Get the number of rows from the user
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns (printing stars)
        for (j = 1; j <= i; j++) {
            printf("* "); // Print a star followed by a space
        }
        printf("\n"); // Move to the next line after each row 
        
    }

    return 0;
}
