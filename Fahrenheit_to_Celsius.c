#include<stdio.h>
int main()
{
    float f,c;
    scanf("%f%f",&f,&c);
    c=((f-32)*5)/9;
    printf("%.2f",c);
}