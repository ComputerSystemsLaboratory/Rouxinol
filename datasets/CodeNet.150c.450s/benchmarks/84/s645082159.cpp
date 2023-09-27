#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxx 450100
#define infinity 2000000000
typedef long long ll;

int L[maxx/2+2],R[maxx/2+2];
ll ans=0;

void merge(int A[],int left,int mid,int right){
	int n1=mid-left,n2=right-mid;
	for(int i=0;i<n1;i++) L[i]=A[left+i];
	for(int i=0;i<n2;i++) R[i]=A[mid+i];
	int i=0,j=0;
	L[n1]=R[n2]=infinity;
	for(int x=left;x<right;x++){
		if(L[i]<=R[j]) {
			A[x]=L[i++];
		}else{
			A[x]=R[j++];
			ans+=n1-i;
		}
	}
	return ;
}

void merge_sort(int A[],int left ,int right){
	if(left+1<right){
		int mid =(left+right)/2;
		merge_sort(A,left,mid);
		merge_sort(A,mid,right);
		merge(A,left,mid,right);
	}
	return ;
}

int main (){
	int n;
	cin>>n;
	int A[maxx];
	for(int i=0;i<n;i++) cin>>A[i];
	merge_sort(A,0,n);
	cout<<ans<<endl;
	return 0;
}
