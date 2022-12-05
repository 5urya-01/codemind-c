#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=a*2;i>=1;i=i-2)
    {
        printf("%d ",i);
    }
}