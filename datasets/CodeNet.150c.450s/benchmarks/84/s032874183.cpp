#include <stdio.h>
#include <limits.h>
#include <algorithm>

using namespace std;

long long int sum = 0;


void merge(int A[],int left,int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1],R[n2+1];
	for(int i = 0; i < n1; i++) L[i] = A[left + i];
	for(int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] =  INT_MAX;

	int i = 0, j = 0;
	for(int k = left;k < right; k++){
		if(L[i] < R[j]){
			A[k] = L[i++];
		}else{
			A[k] = R[j++];
			sum += n1 - i;
		}
	}
}

void mergeSort(int A[],int left,int right){
	if(left+1 < right){
		int mid = (left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i = 0; i < n; i++) scanf("%d",&A[i]);

	mergeSort(A,0,n);

	printf("%lld\n",sum);

}