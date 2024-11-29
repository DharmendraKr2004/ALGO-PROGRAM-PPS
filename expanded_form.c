#include <stdio.h>

void expandedForm(int num) {
    // Check if the number is in the valid range (1 to 999)
    if (num < 1 || num > 999) {
        printf("Please enter a number between 1 and 999.\n");
        return;
    }

    // Extract the hundreds, tens, and ones place values
    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int ones = num % 10;

    // Print the expanded form
    if (hundreds > 0) {
        printf("%d00", hundreds);  // Hundreds place
        if (tens > 0 || ones > 0) {
            printf(" + ");
        }
    }
    if (tens > 0) {
        printf("%d0", tens);  // Tens place
        if (ones > 0) {
            printf(" + ");
        }
    }
    if (ones > 0) {
        printf("%d", ones);  // Ones place
    }

    printf("\n");
}

int main() {
    int num;

    // Ask for user input
    printf("Enter a number between 1 and 999: ");
    scanf("%d", &num);

    // Call the function to print the expanded form
    expandedForm(num);

    return 0;
}
