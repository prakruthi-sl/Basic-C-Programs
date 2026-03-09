/* Problem Statement:
   Write a C program to count vowels and consonants in a string.
*/
#include <stdio.h>
int main() 
{
    char s[100];
    int v=0,c=0;
    gets(s);
    for(int i=0;s[i];i++)
    {
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
          v++;
        else 
         if(ch>='a'&&ch<='z') 
          c++;
     }
     printf("Vowels=%d Consonants=%d",v,c);
}