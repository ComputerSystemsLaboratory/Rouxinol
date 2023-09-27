#include <iostream>
using namespace std;

#define MAX 200000
#define SENTINEL 2000000000
typedef long long llong;

int L[MAX/2+2],R[MAX/2+2];

llong merge(int A[], int n, int left, int mid, int right){
	int i,j,k;
	llong cnt = 0;
	int lenL = mid-left;
	int lenR = right-mid;
	for(i = 0; i < lenL; i++) L[i] = A[left+i];
	for(i = 0; i < lenR; i++) R[i] = A[mid+i];
	L[lenL] = R[lenR] = SENTINEL;
	i = j = 0;
	for(k = left; k < right; k++){
		if( L[i] <= R[j] ) A[k] = L[i++];
		else { A[k] = R[j++]; cnt += lenL-i;}
	}
	return cnt;
}

llong mergeSort(int A[], int n, int left, int right){
	int mid;
	llong cnt = 0;
	if(left+1 < right){
		mid = (left+right)/2;
		cnt += mergeSort(A,n,left,mid);
		cnt += mergeSort(A,n,mid,right);
		cnt += merge(A,n,left,mid,right);
	}
	return cnt;
}

int main(){
	int A[MAX],n;
	llong cnt = 0;
	
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	cnt = mergeSort(A,n,0,n);
	cout << cnt << endl;
	return 0;
}
