#include<iostream>
#define MAXN 500000+5
using namespace std;
int a[MAXN];
int t[MAXN];
int count=0;
void merge(int* A,int x,int y,int* T)
{
	if(y-x>1)
	{
		int mid=x+(y-x)/2;
		int p=x,q=mid,i=x;
		merge(A,x,mid,T);
		merge(A,mid,y,T);
		while(q<y||p<mid)
		{
			if(q>=y||(p<mid&&A[p]<=A[q]))T[i++]=A[p++];
			else T[i++]=A[q++];
			count++;
		}
		for(i=x;i<y;i++)
		    A[i]=T[i];
	}
}
int main()
{
	int n;
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
	    cin>>a[i];
	merge(a,0,n,t);
	for(i=0;i<n-1;i++)
	    cout<<t[i]<<' ';
	cout<<t[n-1]<<endl;
	cout<<count<<endl;    
	return 0;
}