/*
* @Author: Samson
* @Date:   2018-05-04 10:11:57
* @Last Modified by:   Samson
* @Last Modified time: 2018-05-04 11:46:26
*/
//   @URL : 
#include<bits/stdc++.h>
#include<algorithm>
#include <cstdlib>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 2*1e5+10;

int a[MAXN],n,L[MAXN/2],R[MAXN/2];

LL merge(int a[],int n,int left,int mid,int right)
{
	int i,j,k;
	LL cnt = 0;
	int n1 = mid - left;
	int n2 = right - mid;
	for(i = 0; i < n1; ++i)	L[i] = a[left+i];
	for(i = 0; i < n2; ++i)	R[i] = a[mid+i];
	L[n1] = R[n2] = INF;
	i = j = 0;
	for(k = left; k < right; ++k)
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i++];
		}
		else
		{
			a[k] = R[j++];
			cnt += n1-i;
		}
	}
	return cnt;
}
LL mergesort(int a[],int n,int left,int right)
{
	int mid;
	LL v1,v2,v3;
	if(left + 1 < right)
	{
		mid = (left+right)/2;
		v1 = mergesort(a,n,left,mid);
		v2 = mergesort(a,n,mid,right);
		v3 = merge(a,n,left,mid,right);
		return v1+v2+v3;
	}
	else
		return 0;
}
int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	cin>>n;
	for(int i = 0; i < n; ++i)
		cin>>a[i];
	LL ans = mergesort(a,n,0,n);
	cout<<ans<<'\n';
	return 0;
}
