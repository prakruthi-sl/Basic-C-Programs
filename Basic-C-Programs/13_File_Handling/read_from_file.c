/* Problem Statement:
   Write a C program to read data from a file.
*/
#include <stdio.h>
int main() 
{
    FILE *f=fopen("test.txt","r");
    char ch;
    while((ch=fgetc(f))!=EOF)
        printf("%c",ch);
    fclose(f);
}