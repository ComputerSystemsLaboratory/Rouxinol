#include <iostream>
#include <cstdlib>
#include <memory>
#include <limits.h>

using namespace std;

void printarray(int n, int a[]){
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void merge(int A[], int left, int mid, int right, long long int& cnt){
	//cout << "merge" << endl;
	int n1;
	int n2;
	n1 = mid - left;
	n2 = right - mid;
	int* L = new int[n1+1];
	int* R = new int[n2+1];
	for (int i=0; i<n1; i++){
		L[i] = A[left + i];
	}
	for (int i=0; i<n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	//printarray(n1,L);
	//printarray(n2,R);
	int i = 0;
	int j = 0;
	for (int k = left; k<right; k++){
		if (L[i] < R[j]){
			A[k] = L[i++];
		}
		else{
			A[k] = R[j++];
			cnt+=n1-i;
		}
	}
	delete[] L;
	delete[] R;
}

void mergesort(int A[], int left, int right, long long int& cnt){
	int mid;
	if (left+1 < right){
		mid = int((left+right)/2);
		mergesort(A,left,mid,cnt);
		mergesort(A,mid,right,cnt);
		merge(A,left,mid,right,cnt);
	}
}

int main(){
	int n;
	cin >> n;

	int* A = new int[n];
	int tmp;
	long long int cnt = 0;
	for (int i=0; i<n; i++){
		cin >> tmp;
		A[i] = tmp;
	}

	mergesort(A, 0, n, cnt);
	delete[] A;

	cout << cnt << endl;

	return 0;
}

