/* Problem Statement:
   Write a C program to write data to a file.
*/
#include <stdio.h>
int main() 
{
    FILE *f=fopen("test.txt","w");
    fprintf(f,"Hello File");
    fclose(f);
}