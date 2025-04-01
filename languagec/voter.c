#include <stdio.h>

int age() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return age;
}

int main() {
    int userAge = age();
    
    if (userAge < 12) {
        printf("price 50\n");
    } else {
        printf("price 100\n");
    }
}
