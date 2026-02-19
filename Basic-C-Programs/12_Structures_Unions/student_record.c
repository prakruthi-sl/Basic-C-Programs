#include <stdio.h>

struct Student{
    int id;
    char name[20];
};

int main(){
    struct Student s;
    scanf("%d%s",&s.id,s.name);
    printf("%d %s",s.id,s.name);
}