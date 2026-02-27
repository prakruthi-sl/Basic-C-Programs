/* Problem Statement:
   Write a C program to demonstrate the use of switch-case statement.
*/
#include <stdio.h>
int main() {
    int choice;
    printf("1.Add 2.Sub\n");
    scanf("%d",&choice);

    switch(choice) {
        case 1: printf("Addition"); break;
        case 2: printf("Subtraction"); break;
        default: printf("Invalid");
    }
}
