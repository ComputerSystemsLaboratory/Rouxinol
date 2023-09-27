#include <iostream>
#define INFTY 1000000001

using namespace std;
int A[500001], L[500001], R[500001];
int n;
int countNum = 0;

void merge(int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	for(int i = 0; i < n1; i++){
		L[i] = A[left + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;
	int i = 0;
	int j = 0;
	for(int k = left; k < right; k++){
		countNum++;
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}else{
			A[k] = R[j];
			j++;
		}
	}
}

void mergeSort(int left , int right){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}


int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	mergeSort(0, n);
	for(int i = 0; i < n - 1; i++){
		cout << A[i] <<" ";
	}
	cout<<A[n - 1] << endl;
	cout << countNum << endl;
	return 0;
}