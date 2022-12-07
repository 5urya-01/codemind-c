#include<stdio.h>
int main()
{
    int a,b,i,max;
    scanf("%d%d",&a,&b);
    max=b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("%d",max);
            break;
        }
        max++;
    }
}