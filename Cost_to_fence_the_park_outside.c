#include<stdio.h>
int main()
{
    int l,b,d,w1,w2,w3,tc,c;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    w1=l*b;
    w2=(l+2*d)*(b+2*d);
    w3=w2-w1;
    tc=w3*c;
    printf("%d",tc);
}