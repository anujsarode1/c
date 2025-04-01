// age ="12"
// height ="140"
// inputage = input("enter age :")
// inputheight = input("enter height :")
// if(inputage >= "12" and inputheight >= "140"):
//     print("welcome to ride");
// else 
// {    print("not eligible");} 
#include <stdio.h>

int age() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return age;
}
int height() {
    int height;
    printf("Enter your age: ");
    scanf("%d", &height);
    return height;
}
int main() {
    int userAge = age();
    
    if (userAge < 12) {
        printf("Welcome to ride");
    } else {
        printf("not eligible");
    } 
    if (height < 140) {
        printf("welcome to ride");
    } else {
        printf("not eligible"); }
} 
