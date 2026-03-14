/* Problem Statement:
   Write a C program to demonstrate the use of unions.
*/
#include <stdio.h>
union Data
{
    int i;
    float f;
};

int main()
{
    union Data d;
    d.i=10;
    printf("%d",d.i);
}