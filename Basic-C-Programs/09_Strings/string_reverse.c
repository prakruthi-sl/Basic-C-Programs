/* Problem Statement:
   Write a C program to reverse a given string.
*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50];
    gets(s);
    strrev(s);
    printf("%s",s);
}