#include <stdio.h>
#include <string.h>

int main() {
    char s[50], t[50];
    gets(s);
    strcpy(t,s);
    strrev(t);
    if(strcmp(s,t)==0) printf("Palindrome");
    else printf("Not Palindrome");
}