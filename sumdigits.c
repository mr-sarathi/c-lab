#include <stdio.h>

// Function to calculate the sum of digits
int sumDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;      // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); // Read integer input

    int result = sumDigits(number);
    printf("Sum of digits: %d\n", result);

    return 0;
}
