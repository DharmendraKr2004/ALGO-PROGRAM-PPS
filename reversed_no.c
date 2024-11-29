#include<stdio.h>
int main()
{
    int a,reversed=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        reversed=reversed*10+a;
        n=n/10;
    }
    printf("Reversed No = %d",reversed);
    return 0;
}