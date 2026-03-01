/* Problem Statement:
   Write a C program to declare and display elements of an array.
*/
#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
}
