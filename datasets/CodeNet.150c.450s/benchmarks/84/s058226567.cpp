#include <iostream>
using namespace std;
#define Max 200000
#define Top 1000000005
typedef long long ll;
int L[Max/2+5],R[Max/2+5];
ll cnt = 0;
void merge(int A[],int n,int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int i,j;
	for(i=0;i<n1;i++) L[i] = A[left+i];
	for(i=0;i<n2;i++) R[i] = A[mid+i];
	L[n1] = R[n2] = Top;
	i = j = 0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]) A[k] = L[i++];
		else {
			A[k] = R[j++];
			cnt += n1 - i;
		}
	}
	
}
void mergeSort(int A[],int n,int left,int right){
	if(left+1<right){
		int mid = (left+right)/2;
		mergeSort(A,n,left,mid);
		mergeSort(A,n,mid,right);
		merge(A,n,left,mid,right);
	}
}
int main(){
	int i,n,A[Max];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&A[i]);
	mergeSort(A,n,0,n);
	cout<<cnt<<endl;
	return 0;
}
