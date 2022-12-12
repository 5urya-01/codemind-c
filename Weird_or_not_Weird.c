#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("not weird");
    }
    if(n%2!=0)
    {
        printf("weird");
    }
}