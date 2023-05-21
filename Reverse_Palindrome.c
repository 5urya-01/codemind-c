#include<stdio.h>
int revr(int);
int main()
{
    int n,r,ad,rm,rev=0;
    scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
        rm=t%10;
        rev=rev*10+rm;
        t/=10;
    }
    ad=n+rev;
    while(1){
    if(revr(ad)==1){
        printf("%d",ad);
        break;
    }
    else{
        ad+=revr(ad);
    }
    }
    
}
int revr(int n)
{
    int rev=0,rm,t;
    t=n;
    while(t!=0)
    {
        rm=t%10;
        rev=rev*10+rm;
        t/=10;
    }
    if(n==rev)
        return 1;
    else
        return rev;
}
