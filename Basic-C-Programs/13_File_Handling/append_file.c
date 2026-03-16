/* Problem Statement:
   Write a C program to append data to an existing file.
*/
#include <stdio.h>
int main() 
{
    FILE *f=fopen("test.txt","a");
    fprintf(f,"\nAppended text");
    fclose(f);
}