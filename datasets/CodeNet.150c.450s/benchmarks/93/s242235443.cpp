#include <iostream>
#include <vector>
using namespace std;

const long INFTY = 1000000001;

long partition(pair<char, long> A[], long p, long r){
	long x = A[r].second;
	long i = p - 1;
	long j;
	for (j = p; j < r; j++){
		if (A[j].second <= x){
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void quicksort(pair<char, long> A[], long p, long r){
	if (p < r){
		long q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

void merge(pair<char, long> A[], long left, long mid, long right){
	long n1 = mid - left;
	long n2 = right - mid;
	vector< pair<char, long> > L(n1 + 1), R(n2 + 1);
	for (long i = 0; i < n1; i++) L[i] = A[left + i];
	for (long i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1].second = R[n2].second = INFTY;
	long i = 0, j = 0;
	for (long k = left; k < right; k++){
		if (L[i].second <= R[j].second){
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
	}
}

void mergeSort(pair<char, long> A[], long left, long right){
	if (left + 1 < right){
		long mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

bool isStable(pair<char, long> A[], pair<char, long> B[], long n){
	for (long i = 0; i < n; i++){
		if (A[i].first != B[i].first) return 0;
	}
	return 1;
}

int main(){
	long n;
	cin >> n;
	pair<char, long> A[100000];
	for (long i = 0; i < n; i++) cin >> A[i].first >> A[i].second;
	pair<char, long> B[100000];
	for (long i = 0; i < n; i++) B[i] = A[i];
	quicksort(A, 0, n - 1);
	mergeSort(B, 0, n);
	if (isStable(A, B, n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (long i = 0; i < n; i++){
		cout << A[i].first << " " << A[i].second << endl;
	}
	return 0;
}