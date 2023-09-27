#include <cstdio>
#include <iostream>
using namespace std;

#define MAX 500000
#define SENTINEL 2000000000

long L[MAX/2+2], R[MAX/2+2];

long merge(long x[], long n, long left, long mid, long right){
	long n1=mid-left;
	long n2=right-mid;
	
	long cnt=0;
	
	for(long i=0; i<n1; ++i) L[i]=x[left+i];
	for(long i=0; i<n2; ++i) R[i]=x[mid+i];
	L[n1]=R[n2]=SENTINEL; //?????????????????????

	long i=0, j=0;
	for(long k=left; k<right; ++k){
		if(L[i]<=R[j]) x[k]=L[i++];
		else{
			x[k]=R[j++];
			cnt+=n1-i;
		}
	}	
	
	return cnt;
}

long mergesort(long x[], long n, long left, long right){
	if(left+1 < right){
		long mid=(left+right)/2;
		
		long v1, v2, v3;
		
		v1=mergesort(x, n, left, mid);
		v2=mergesort(x, n, mid, right);
		v3=merge(x, n, left, mid, right);
		
		return v1+v2+v3;	
	}
	else return 0;
}

int main(){
	long a[MAX], n;
	
	scanf(" %ld", &n);
	for(long i=0; i<n; ++i) scanf(" %ld", &a[i]);
	
	long ans=mergesort(a, n, 0, n);
	
	printf("%ld\n", ans);
}