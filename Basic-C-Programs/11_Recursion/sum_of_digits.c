/* Problem Statement:
   Write a C program to find the sum of digits of a number using recursion.
*/
#include <stdio.h>
int sum(int n)
{
    if(n==0) 
    return 0;
    return n%10 + sum(n/10);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}