#include<stdio.h>
int main()
{
    int a,p,c,b,m,co;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&co);
    a=(p+c+b+m+co)/5;
    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>=80)
    {
        printf("Grade B");
    }
    else if(a>=70)
    {
        printf("Grade C");
    }
    else if(a>=60)
    {
        printf("Grade D");
    }
    else if(a>=40)
    {
        printf("Grade E");
    }
    else if(a<40)
    {
        printf("Grade F");
    }
}