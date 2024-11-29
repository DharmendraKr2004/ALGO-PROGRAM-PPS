#include<stdio.h>
int main()
{
    int swap,a,b;
    printf("enter the values of a and b :");
    scanf("%d %d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("Now -> a = %d and b = %d",a,b);
    return 0;
}