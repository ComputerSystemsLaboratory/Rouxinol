#include <iostream>
#include <cstdio>
#include <climits>
#include <vector>
using namespace std;

#define SENTINEL (LONG_MAX)

template <typename T>
void print(vector<T> &x) {
	for(long i=0;i<x.size();++i) {
		if (i!=0) cout << " ";
		cout << x[i];
	}
	cout << endl;
}

long Merge(vector<long> &A, long left, long mid, long right) {
	long n1 = mid - left;
	long n2 = right - mid;
	vector<long> L(n1+1,0), R(n2+1,0);
	for(long i=0;i<n1;++i) {
		L[i] = A[left+i];
	}
	for(long i=0;i<n2;++i) {
		R[i] = A[mid+i];
	}
	L[n1] = SENTINEL; 
	R[n2] = SENTINEL; 
	long i,j;
	i = j = 0;
	long count = 0;
	for (long k=left; k<right; ++k) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else {
			count += n1 - i;//思いつかなかった 
			A[k] = R[j];
			j++;
		}
	}
	//cout << "count = " << count << ", lmr : " << left << " " << mid << " " << right << endl;
	//print(A);
	return count; 
}

long MergeSort(vector<long> &A, long left, long right) {
	long count = 0;
	if ((left + 1) < right) {
		long mid = (left + right) / 2;
		count += MergeSort(A, left, mid);
		count += MergeSort(A, mid, right);
		count += Merge(A, left, mid, right); 
	}
	return count;
}

int main() {
	long n;
	cin >> n;// 1 <= n <= 200000
	vector<long > a(n,0);
	for (long i=0; i<n; ++i) scanf("%ld", &a[i]);

	// find the number of inversions
	long ans = MergeSort(a,0,a.size());	
	cout << ans << endl;
	return 0;
}


