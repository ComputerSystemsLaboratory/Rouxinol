#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<queue>
#include<stack>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<cstdlib>
#include<typeinfo>
#include<sstream>
#include<list>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define fori(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
int stringInt(string a)
{
	return atoi(a.c_str());
}
string intString(int a)
{
	stringstream ss;
	ss<<a;
	return ss.str();
}
vector<int> SieveOfEratosthenes(int x)
{
	vector<int> a;
	vector<int> b(x+1,0);
	for(int i=2;i<=x;i++)
	{
		if(b[i]==0)
		{
			a.push_back(i);
			for(int l=i;l<=x;l+=i)
			{
				b[l]=1;
			}
		}
	}
	return a;
}

vector<int> merge(vector<int> a,int left,int mid,int right)
{
	int n1=mid-left;
	int n2=right-mid;
	vector<int> R,L;
	for(int i=0;i<n1;i++)
	{
		L.push_back(a[left+i]);
	}
	for(int i=0;i<n2;i++)
	{
		R.push_back(a[mid+i]);
	}
	L.push_back(999999999);
	R.push_back(999999999);
	int i=0,j=0;
	for(int k=left;k<right;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}



	return a;
}
vector<int> mergeSort(vector<int> a,int left,int right)
{
	if(left+1<right)
	{
		int mid = (right+left)/2;
		a=mergeSort(a,left,mid);
		a=mergeSort(a,mid,right);
		a=merge(a,left,mid,right);
	}
	return a;
}

int ans=0;
int a[500003];
int n;
int R[500003],L[500003];
void merge(int left,int mid,int right)
{
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)
	{
		L[i]=a[left+i];
	}
	for(int i=0;i<n2;i++)
	{
		R[i]=a[mid+i];
	}
	R[n2]=L[n1]=999999999;
	int i=0;int j=0;
	for(int k=left;k<right;k++)
	{
		ans++;
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}

	}

	return ;
}

void mergeSort(int left,int right)
{
	if(left+1<right)
	{
		int mid = (left+right)/2;
		mergeSort(left,mid);
		mergeSort(mid,right);
		merge(left,mid,right);
	}
	return ;
}



int main() {

	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	ans=0;
	mergeSort(0,n);

	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)cout<<" ";
	}

	cout<<endl;
	cout<<ans<<endl;
	return 0;
}