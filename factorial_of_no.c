#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of given no = %d",fact);
    return 0;
}