#include<stdio.h>
int search(int a[],int l,int h,int k)
{
	int m;
	m=(l+h)/2;
	if(l>h)
	{
		return -1;
	}
    else if(a[m]==k)
		{
			return m;
		}
	else if(a[m]>k)
		{
			h=m-1;
		}
	else if(a[m]<k)
		{
			l=m+1;
		}
	search(a,l,h,k);
}
int main()
{
	int n,a[100],i,k,ans;
	printf("size of an array: ");
	scanf("%d",&n);
	printf("Enter the values of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element: ");
	scanf("%d",&k);
	ans=search(a,0,n-1,k);
	printf(" position of the value: %d",ans);
}
