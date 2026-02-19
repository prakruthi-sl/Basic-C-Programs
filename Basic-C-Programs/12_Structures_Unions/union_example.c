#include <stdio.h>

union Data{
    int i;
    float f;
};

int main(){
    union Data d;
    d.i=10;
    printf("%d",d.i);
}