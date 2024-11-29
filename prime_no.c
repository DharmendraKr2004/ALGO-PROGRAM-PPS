#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("It is a prime no");
    }
    else
    {
        printf("Not a prime no");
    }
    return 0;
}