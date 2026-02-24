/* Problem Statement:
   Write a C program to take input from the user and display the entered values.
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("You entered: %d\n", a);
    return 0;

}
