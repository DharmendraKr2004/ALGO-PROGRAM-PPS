#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("sum of digits of no is %d",sum);
    return 0;
}