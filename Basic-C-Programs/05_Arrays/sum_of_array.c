/* Problem Statement:
   Write a C program to find the sum of elements of an array.
*/
#include <stdio.h>
int main() 
{
    int a[5], sum=0;
    for(int i=0;i<5;i++) 
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("Sum = %d",sum);
}
