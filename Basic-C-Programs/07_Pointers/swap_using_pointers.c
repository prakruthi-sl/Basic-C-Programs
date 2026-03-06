/* Problem Statement:
   Write a C program to swap two numbers using pointers.
*/
#include <stdio.h>
void swap(int *a,int *b)
{
    int t=*a; *a=*b; *b=t;
}
int main() 
{
    int x=5,y=10;
    swap(&x,&y);
    printf("x=%d y=%d",x,y);
}
