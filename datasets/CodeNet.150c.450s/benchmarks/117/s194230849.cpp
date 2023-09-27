//归并排序
#include<iostream>
using namespace std;
#define maxx 500000
#define INF 2000000000
int a[maxx];
int b[maxx/2+2];
int c[maxx/2+2];
int cnt=0;
void merge(int left,int right)
{
	int mid=(left+right)/2;
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)//不包含mid 
	{
		b[i]=a[i+left];
	}
	b[n1]=INF;//减少比较次数 
	for(int j=0;j<n2;j++)
	{
		c[j]=a[mid+j];
	}
	c[n2]=INF;//减少比较次数 
	int cn1=0;
	int cn2=0;
	int cn3=0;
	/*while(cn1<=n1-1&&cn2<=n2-1)
	{
		cnt++;
		if(b[cn1]<=c[cn2])
			a[cn3++]=b[cn1++];
		else
			a[cn3++]=c[cn2++];
	}
	if(cn1==n1)
	{
		while(cn2<=n2-1)
			a[cn3++]=c[cn2++];
	}
	else if(cn2==n2)
	{
		while(cn1<=n1-1)
			a[cn3++]=b[cn1++];
	}*/
	for(int k=left;k<right;k++)
	{
		cnt++;
		if(b[cn2]<=c[cn3])
			a[k]=b[cn2++];
		else
			a[k]=c[cn3++];
	}
} 
void mergesort(int left,int right)
{
	if(left+1<right)
	{
		int mid=(left+right)/2;
		mergesort(left,mid);
		mergesort(mid,right);
		merge(left,right);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(0,n);
	for(int i=0;i<n;i++)
	{
		if(i>0)
			cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}

