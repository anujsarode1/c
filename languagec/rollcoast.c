#include <stdio.h>

int age() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);  // Uncomment this to read user input
    return age;
}

int height() {
    int height;
    printf("Enter your height: ");
    scanf("%d", &height);  // Uncomment this to read user input
    return height;
}

int main() {
    int userAge = age();
    int userHeight = height();  // Get height from the height function
    
    if (userAge > 12) {
        printf("Welcome to ride\n");
    } else {
        printf("Not eligible due to age\n");
    }

    if (userHeight >= 140) {  // Check if height is 140 or greater
        printf("Welcome to ride\n");
    } else {
        printf("Not eligible due to height\n");
    }

    return 0;
}
