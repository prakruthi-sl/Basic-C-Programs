/* Problem Statement:
   Write a C program to implement a student management system using structures and file handling.
*/
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
};

int main()
{
    struct Student s;
    printf("Enter ID and Name: ");
    scanf("%d%s",&s.id,s.name);
    printf("Student: %d %s",s.id,s.name);
}