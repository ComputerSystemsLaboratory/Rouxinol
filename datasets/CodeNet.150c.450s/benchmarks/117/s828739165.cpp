#include <iostream>
#include <limits>
#include <vector>
using namespace std;

void merge(vector<int> &A, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L, R;
	L.resize(n1 + 1);
	R.resize(n2 + 1);
	for(int i = 0; i < n1; i++){
		L[i] = A[left + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = numeric_limits<int>::max();
	R[n2] = numeric_limits<int>::max();
	int i = 0;
	int j = 0;
	for(int k = left; k < right; k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i = i + 1;
		}else{
			A[k] = R[j];
			j = j + 1;
		}
	}
}

void mergeSort(vector<int> &A, int left, int right, int &count){
	if(left+1 < right){
	    int mid = (left + right)/2;
	    mergeSort(A, left, mid, count);
	    mergeSort(A, mid, right, count);
	    merge(A, left, mid, right);
		count += right - left;
	}
}

int main()
{
	int n;
	int count = 0;
	cin >> n;
	vector<int> S;
	S.resize(n);
	for(int i = 0; i < n; i++){
		cin >> S[i];
	}
	mergeSort(S, 0, n, count);
	for(int i = 0; i < n-1; i++){
		cout << S[i] << ' ';
	}
	cout << S[n-1] << endl << count << endl;
	return 0;
}