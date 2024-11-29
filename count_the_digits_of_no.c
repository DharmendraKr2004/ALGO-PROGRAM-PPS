#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the value:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("total digit(count) of a digit = %d",count);
    return 0;
}