/* Problem Statement:
   Write a C program to find the length of a string.
*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50];
    gets(s);
    printf("Length = %lu", strlen(s));
}