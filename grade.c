#include <stdio.h>
#include <ctype.h>  // For converting characters to uppercase

int main() {
    char gradeLetter;

    // Ask the user to enter a grade letter (A, B, C, D, F)
    printf("Enter your grade(A,B,C,D,F):");
    scanf(" %c", &gradeLetter);  // The space before %c handles any leading whitespace

    // Convert gradeLetter to uppercase to handle both lowercase and uppercase inputs
    gradeLetter = toupper(gradeLetter);

    // Check the grade letter and print the corresponding numeric range
    if (gradeLetter == 'A') {
        printf("Your grade range is 90 to 💯.\n");
    } else if (gradeLetter == 'B') {
        printf("Your grade range is 80 to 89.\n");
    } else if (gradeLetter == 'C') {
        printf("Your grade range is 70 to 79.\n");
    } else if (gradeLetter == 'D') {
        printf("Your grade range is 60 to 69.\n");
    } else if (gradeLetter == 'F') {
        printf("Your grade range is 0 to 59.\n");
    } else {
        printf("Invalid grade letter entered. Please enter one of the following: A, B, C, D, or F.\n");
    }

    return 0;
}
