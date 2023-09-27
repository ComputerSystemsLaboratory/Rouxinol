#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define infinity 1000000010;
int n,cnt=0;
int A[500010],L[250010],R[250010];

void merge(int left,int mid,int right){
	for(int i=0;i<mid-left;i++) L[i]=A[left+i];
	for(int i=0;i<right-mid;i++) R[i]=A[mid+i];
	L[mid-left]=infinity;R[right-mid]=infinity;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		cnt++;
		if(L[i]>R[j]) A[k]=R[j++];
		else A[k]=L[i++];
	}
	return ;
}

void merge_sort(int left,int right){
	if(left+1<right){
	int mid=(left+right)/2;
	merge_sort(left,mid);
	merge_sort(mid,right);
	merge(left,mid,right);
	return ;
	}
}

int main (){
	cin>>n;
	for(int i=0;i<n;i++) cin>>A[i];
	merge_sort(0,n);
	for(int i=0;i<n;i++) {
		if(i) cout<<" ";
		cout<<A[i];
	}
	cout<<endl<<cnt<<endl;
	return 0;
}
