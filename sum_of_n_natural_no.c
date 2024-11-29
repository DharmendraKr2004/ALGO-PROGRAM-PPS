#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter the Number:");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i*i;

    }
    printf("sum of square of nth natural numbers is %d",s);
    return 0;
}