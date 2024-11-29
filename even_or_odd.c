#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("It is Even No");
    }
    else
    {
        printf("Odd No");
    }
    return 0;
}