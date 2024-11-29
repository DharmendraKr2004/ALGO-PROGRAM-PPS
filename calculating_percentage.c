#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the maths marks:");
    scanf("%d",&a);
    printf("Enter the c.sci marks:");
    scanf("%d",&b);
    printf("Enter the science marks:");
    scanf("%d",&c);
    printf("Enter the english marks:");
    scanf("%d",&d);
    printf("Enter the hindi marks:");
    scanf("%d",&e);
    float total=a+b+c+d+e;
    float percent=(total/500)*100;
    printf("Percent of all subjects is %.2f",percent);
    return 0;
}    

    