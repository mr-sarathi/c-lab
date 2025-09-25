#include <stdio.h>

int main() {
    int n, first = 1, second = 2, nextTerm, i;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print a message indicating the output
    printf("Fibonacci Series: ");

    // Handle the first two terms separately
    if (n >= 1) {
        printf("%d", first);
    }
    if (n >= 2) {
        printf(", %d", second);
    }

    // Generate and print the remaining terms
    for (i = 2; i < n; i++) {
        nextTerm = first + second;
        printf(", %d", nextTerm);
        first = second;
        second = nextTerm;
    }

    printf("\n"); // Newline for better formatting
    return 0;
}
