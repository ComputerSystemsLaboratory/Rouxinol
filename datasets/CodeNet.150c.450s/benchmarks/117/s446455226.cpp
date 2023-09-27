#include <iostream>
#include <cstdlib>

using namespace std;

void merge(int A[], int left, int mid, int right, int& cnt){
	int n1;
	int n2;
	n1 = mid - left;
	n2 = right - mid;
	int L[n1+1];
	int R[n2+1];
	for (int i=0; i<n1; i++){
		L[i] = A[left + i];
	}
	for (int i=0; i<n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = 1000000001;
	R[n2] = 1000000001;
	int i = 0;
	int j = 0;
	for (int k = left; k<right; k++){
		if (L[i] <= R[j]){
			A[k] = L[i];
			i = i + 1;
			cnt++;
		}
		else{
			A[k] = R[j];
			j = j + 1;
			cnt++;
		}
	}
}

void mergesort(int A[], int left, int right, int& cnt){
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

	int A[n];
	int tmp;
	int cnt = 0;
	for (int i=0; i<n; i++){
		cin >> tmp;
		A[i] = tmp;
	}

	mergesort(A, 0, n, cnt);

	for (int i=0; i<n; i++){
		if (i==0){
			cout << A[i];
		}
		else{
			cout << " " << A[i];
		}
	}
	cout << endl;
	cout << cnt << endl;


	return 0;
}
