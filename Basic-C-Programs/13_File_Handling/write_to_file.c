#include <stdio.h>

int main() {
    FILE *f=fopen("test.txt","w");
    fprintf(f,"Hello File");
    fclose(f);
}