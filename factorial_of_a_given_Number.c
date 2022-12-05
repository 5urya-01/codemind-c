#include<stdio.h>
int main()
{
    int a,i,product=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        product=product*i;
    }
    printf("%d",product);
}

