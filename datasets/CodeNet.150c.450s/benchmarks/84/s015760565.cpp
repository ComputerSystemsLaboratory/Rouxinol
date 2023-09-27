#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

#define MAX 200000
int L[(MAX/2)+2];
int R[(MAX/2)+2];
long long merge(int A[], int left, int mid, int right){
	int nl=mid-left;
	int nr=right-mid;
	long long cnt=0;
	for(int i=0;i<nl;i++){
		L[i]=A[left+i];
	}
	for(int i=0;i<nr;i++){
		R[i]=A[mid+i];
	}
	L[nl]=2000000000;
	R[nr]=2000000000;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}
		else{
			A[k]=R[j];
			j++;
			cnt+=nl-i;
		}
	}
	return cnt;
}

long long mergesort(int A[], int left, int right){
	int mid;
	long long int l,r,mg;
	if(left+1<right){
		mid=(left+right)/2;
		l=mergesort(A,left,mid);
		r=mergesort(A,mid,right);
		mg=merge(A,left,mid,right);
		return l+r+mg;
	}
	else
	return 0;
}

int main(){
	int A[MAX],n;
	long long ans;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	ans = mergesort(A,0,n);
	printf("%lld\n",ans);
}