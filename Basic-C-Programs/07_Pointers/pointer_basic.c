#include <stdio.h>

int main() {
    int a=10;
    int *p=&a;
    printf("Value=%d Address=%p",*p,p);
}