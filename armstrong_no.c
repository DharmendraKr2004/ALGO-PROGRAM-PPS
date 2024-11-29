#include<stdio.h>
int main()
{
    int n,sum=0,compare,a;
    printf("Enter the Number:");
    scanf("%d",&n);
    compare=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+(a*a*a);
        n=n/10;
    }
    if(sum==compare)
    {
        printf("It is a Armstrong No");
    }
    else{
        printf("Not a Armstrong No");
    }
    return 0;
}