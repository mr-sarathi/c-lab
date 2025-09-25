#include <stdio.h>
#include <ctype.h> // Required for isalnum() function

int main() {
    char str[100]; // Declare a character array to store the string
    int alphanumeric_count = 0; // Initialize a counter for alphanumeric characters
    int i = 0; // Loop counter

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string from the user

    // Iterate through the string until the null terminator is reached
    while (str[i] != '\0') {
        // Check if the current character is alphanumeric using isalnum()
        if (isalnum(str[i])) {
            alphanumeric_count++; // Increment the counter if it's alphanumeric
        }
        i++; // Move to the next character
    }

    printf("Number of alphanumeric characters in the string: %d\n", alphanumeric_count);

    return 0; // Indicate successful program execution
}
