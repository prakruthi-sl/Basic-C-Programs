/* Problem Statement:
   Write a C program to find the largest of three numbers using conditional statements.
*/
#include <stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("Largest: %d",a);
    else if(b>c)
        printf("Largest: %d",b);
    else
        printf("Largest: %d",c);
}
