#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#define ll long long int
using namespace std;
const int INF=2000000000;
const int SIZE=200000;

int L[SIZE/2+2],R[SIZE/2+2];

ll merge(int A[],int left,int mid,int right)
{
	int n1=mid-left;
	int n2=right-mid;
	int i,j;
	ll a=0;
	for(i=0;i<n1;i++)L[i]=A[left+i];
	for(i=0;i<n2;i++)R[i]=A[mid+i];
	L[n1]=R[n2]=INF;
	i=j=0;
	for(int k=left;k<right;k++)
	{
		if(L[i]<R[j])A[k]=L[i++];
		else
		{
			A[k]=R[j++];
			a+=n1-i;
		}
	}
	return a;
}

ll mergesort(int A[],int left,int right)
{
	ll a=0,b=0,c=0;
	if(left+1<right)
	{
		int mid=(left+right)/2;
		a=mergesort(A,left,mid);
		b=mergesort(A,mid,right);
		c=merge(A,left,mid,right);
	}
	return a+b+c;
}

int main()
{
	int A[SIZE],n,i;
	cin>>n;
	for(i=0;i<n;i++)cin>>A[i];
	cout<<mergesort(A,0,n)<<endl;
	return 0;
}