#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

int64_t cnt = 0;

void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int i, j, k, L[n1+1], R[n2+1];

    for(int i = 0; i < n1; i++)
    	L[i] = A[left + i];
    for(int i = 0; i < n2; i++)
    	R[i] = A[mid + i];
    L[n1] = R[n2] = INT_MAX;

    i = j = 0;
    for (k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += (n1 - i);
        }
    }
}

void mergeSort(int A[], int left, int right) {
	if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(){
	int n;
	cin >> n;
	int a[n], i;
	for(i = 0; i < n; i++)
		cin >> a[i];

	mergeSort(a, 0, n);
	cout << cnt << endl;
	return 0;
}

