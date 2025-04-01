// ticket price 12 year boy // price half 
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
        printf("price""50");
    } else {
        printf("100");
    }
}