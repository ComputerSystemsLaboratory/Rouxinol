#include <iostream>
using namespace std;
#define Max 200000
#define top 2000000000
typedef long long ll;

ll cnt = 0;
int L[Max/2+2],R[Max/2+2];

void  merge(int A[],int n,int left,int mid,int right){
	int i,j,k;
	int n1 = mid - left;
	int n2 = right - mid;
	for(i=0;i<n1;i++) L[i] = A[left+i];
	for(i=0;i<n2;i++) R[i] = A[mid+i];
	L[n1] = R[n2] = top;
	i = j = 0;
	for(k=left;k<right;){
		if(L[i]<=R[j]) A[k++] = L[i++];
		else{
			A[k++] = R[j++];
			cnt += n1 - i;
		} 
	}
}

void mergeSort(int A[],int n,int left,int right){
	if(left+1<right){
		int mid = left + (right-left)/2;
		mergeSort(A,n,left,mid);
		mergeSort(A,n,mid,right);
		merge(A,n,left,mid,right);
	}
}

int main(){
	int A[Max],n,i;
	cin>>n;
	for(i=0;i<n;i++) cin>>A[i];
	mergeSort(A,n,0,n);
	cout<<cnt<<endl;
	
	return 0;
}
