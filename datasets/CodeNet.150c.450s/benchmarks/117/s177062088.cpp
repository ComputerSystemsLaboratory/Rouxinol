#include <iostream>
#include <cmath>
using namespace std;
int count=0;

void merge(int *A,int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	int L[n1+1];
	int R[n2+1];
	for(int i=0;i<n1;i++){
		L[i]=A[left+i];
	}
	for(int i=0;i<n2;i++){
		R[i]=A[mid+i];
	}
	L[n1]=1000000000;
	R[n2]=1000000000;
	int i=0;
	int j=0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]){
			count++;
			A[k]=L[i];
			i++;
		}else{
			count++;
			A[k]=R[j];
			j++;
		}
	}
}

void mergeSort(int *A,int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}

int main(){
	int n;
	cin>>n;
	int S[n];
	for(int i=0;i<n;i++){
		cin>>S[i];
	}
	mergeSort(S,0,n);

	for(int i=0;i<n;i++){
		if(i==n-1){
			cout<<S[i];
		}else{
		  cout<<S[i]<<' ';
		}
	}
	cout<<endl<<count<<endl;
}
