#include<stdio.h>
int main()
{
    int n,c,rev=0,a;
    printf("Enter the Number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        a=n%10;
        rev=(rev*10)+a;
        n=n/10;
    }
    if(c==rev)
    {
        printf("It is a Palindrome No");
    }
    else
    {
        printf("Not a Palindrome No");
    }
    return 0;
}