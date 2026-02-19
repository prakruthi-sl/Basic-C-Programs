#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main(){
    struct Student s={1,"Prakruthi"};
    printf("%d %s",s.id,s.name);
}