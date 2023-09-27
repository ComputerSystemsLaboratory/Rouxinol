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
int store[500000+2],ans;
int L[250000+2],R[250000+2];
void merge(int left,int mid,int right)
{
	int i,j,k;
	int n1,n2;
	n1=mid-left;n2=right-mid;
	for(i=0;i<n1;i++) L[i]=store[left+i];
	for(i=0;i<n2;i++) R[i]=store[mid+i];
	L[n1]=1000000000+1;R[n2]=1000000000+1;
	i=0;j=0;
	for(k=left;k<right;k++)
	{
		if(L[i]<=R[j]){
			store[k]=L[i++];
		}else{
			store[k]=R[j++];
		}
		ans++;
	}
}
void mergesort(int left,int right)
{
	int mid;
	if(left+1<right){
		mid=(left+right)/2;
		mergesort(left,mid);
		mergesort(mid,right);
		merge(left,mid,right);
	}
} 
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&store[i]);
	}
	mergesort(0,n);
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
			printf("%d ",store[i]);
		else
			printf("%d\n",store[i]);
	}
	printf("%d\n",ans);
	return 0;
}
