#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the values:\n");
    scanf("%f%f",&a,&b);
    float avg=(a+b)/2;
    printf("Average = %.2f",avg);
    return 0;

}