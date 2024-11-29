#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the Values:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is greater",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%d is greater",c);
    }

    else
    {
        printf("%d is greater",d);
    }
    return 0;
}