#include<iostream>
#include<stdio.h>
#define max 100000
#define sen 2000000000
using namespace std;

struct card{
	char suit;
	int value;
};
struct card l[max/2+2],r[max/2+2];

void merge(struct card a[],int n,int left,int mid,int right)
{
	int i,j,k;
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++) l[i]=a[left+i];
	for(int i=0;i<n2;i++) r[i]=a[mid+i];
	l[n1].value=r[n2].value=sen;
	i=j=0;
	for(k=left;k<right;k++)
	{
		if(l[i].value<=r[j].value){
			a[k]=l[i++];
		}
		else{
			a[k]=r[j++];
		}
	}
}

void mergesort(struct card a[],int n,int left,int right)
{
	int mid;
	if(left+1<right)
	{
		mid=(left+right)/2;
		mergesort(a,n,left,mid);
		mergesort(a,n,mid,right);
		merge(a,n,left,mid,right);
	}
}

int partition(struct card a[],int n,int p,int r)
{
	int i,j;
	struct card t,x;
	x=a[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(a[j].value<=x.value)
		{
			i++;
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
	t=a[i+1];a[i+1]=a[r];a[r]=t;
	return i+1;
}

void quicksort(struct card a[],int n,int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,n,p,r);
		quicksort(a,n,p,q-1);
		quicksort(a,n,q+1,r);
	}
}

struct card a[max],b[max];
int main()
{
	int n,i,v;
	char s[10];
	int stable=1;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s %d",s,&v);
		a[i].suit=b[i].suit=s[0];
		a[i].value=b[i].value=v;
	}
	
	mergesort(a,n,0,n);
	quicksort(b,n,0,n-1);
	
	for(int i=0;i<n;i++)
	{
		if(a[i].suit!=b[i].suit) stable=0;
	}
	if(stable==1) printf("Stable\n");
	else printf("Not stable\n");
	for(i=0;i<n;i++)
	{
		printf("%c %d\n",b[i].suit,b[i].value);
	}
	return 0;
}