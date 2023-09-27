#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int a[200001];
int L[100001],R[100001];
ll ans=0;
void merge(int a[],int left,int mid,int right)
{
	int len1,len2,i,j,k;
	len1=mid-left;
	len2=right-mid;
	for(i=0;i<len1;i++) L[i]=a[left+i];
	for(i=0;i<len2;i++) R[i]=a[mid+i];
	L[len1]=R[len2]=2000000000;
	i=j=0;
	for(k=left;k<right;k++)
	{
		if(L[i]<R[j]){
			a[k]=L[i++];
		}else{
			a[k]=R[j++];
			ans+=len1-i;
		}
	}
}
void mergeSort(int a[],int left,int right)
{
	int mid;
	if(left+1<right)
	{
		mid=(left+right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
} 
int main()
{	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n);
	cout<<ans<<endl;
	return 0;
}
