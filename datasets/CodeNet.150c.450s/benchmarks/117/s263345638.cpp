#include<iostream>
#include<stdio.h>
#define max 500000
#define sen 2000000000
using namespace std;

int a[max+1];
int l[max/2+2],r[max/2+2];
int cnt;

void merge(int a[],int n,int left,int mid,int right)
{
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++) l[i]=a[left+i];
	for(int i=0;i<n2;i++) r[i]=a[mid+i];
	l[n1]=r[n2]=sen;
	int i=0,j=0;
	for(int k=left;k<right;k++)
	{
		cnt++;
		if(l[i]<=r[j])
		{
			a[k]=l[i++];
		}
		else{
			a[k]=r[j++];
		}
	}
}

void mergesort(int a[],int n,int left,int right)
{
	if(left+1<right)
	{
		int mid=(left+right)/2;
		mergesort(a,n,left,mid);
		mergesort(a,n,mid,right);
		merge(a,n,left,mid,right);
	}
}

int main()
{
	int n,i;
	cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,n,0,n);
	
	for(i=0;i<n;i++)
	{
		if(i) printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	printf("%d\n",cnt);
	return 0;
}