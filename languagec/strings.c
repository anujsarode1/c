// #include <stdio.h>
// int main(){
//     char string [88]= "hello world";
//     char name[]="kush";
//     printf("%s ",strlen(string));
//     printf("%s ",name);
// }
// // strlen
#include <stdio.h>
#include <string.h>  // Include this for strlen

int main(){
    char string[88] = "hello world";
    char name[] = "kush";

    // Use %zu to print the length returned by strlen
   printf("%zu ", strlen(string));  // Get the length of the string "hello world"
    printf("%zu ", strlen(name));
    
    return 0;
}
