/* Problem Statement:
   Write a C program to implement a basic bank management system.
*/
#include <stdio.h>
int main()
{
    float balance=1000;
    int choice;
    printf("1.Deposit 2.Withdraw\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        float d; scanf("%f",&d);
        balance+=d;
    }
    else if(choice==2)
    {
        float w; scanf("%f",&w);
        balance-=w;
    }
    printf("Balance = %.2f",balance);
}