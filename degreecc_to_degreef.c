#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temp:");
    scanf("%f",&c);
    f=(c*1.8)+32.0;
    printf("Temp in degree(F) is %.2f",f);
    return 0;
}