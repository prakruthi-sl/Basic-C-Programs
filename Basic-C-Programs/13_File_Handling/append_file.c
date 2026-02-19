#include <stdio.h>

int main() {
    FILE *f=fopen("test.txt","a");
    fprintf(f,"\nAppended text");
    fclose(f);
}