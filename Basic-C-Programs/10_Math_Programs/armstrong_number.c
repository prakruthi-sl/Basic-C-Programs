#include <stdio.h>
#include <math.h>

int main() {
    int n,temp,sum=0,d;
    scanf("%d",&n);
    temp=n;
    while(n){
        d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    if(sum==temp) printf("Armstrong");
    else printf("Not Armstrong");
}