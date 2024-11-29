#include<stdio.h>
int main()
{
    int n,b,product=1;
    printf("Enter the No:");
    scanf("%d",&n);
    while(n>0)
    {
        b=n%10;
        product=product*b;
        n=n/10;

    }
    printf("Product of given no = %d",product);
    return 0;

}