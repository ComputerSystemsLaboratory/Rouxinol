#include<iostream>
using namespace std;

int partition(int A[], int p, int r) {
    int x, i, j;
    x = A[r];
    i = p-1;
    for (j = p; j < r; j++) {
	if (A[j] <= x) {
	    i++;
	    swap(A[i], A[j]);
	}
    }
    swap(A[i+1], A[r]);
    return i+1;
}

int main() {

    int n, i, res;
    cin >> n;
    int A[n];
    for (i = 0; i < n; i++) {
	cin >> A[i];
    }
    
    res = partition(A, 0, n-1);
    
    for (i = 0; i < res; i++) {
	cout << A[i] << " ";
    }
    cout << "[" << A[res] << "]";
    
    for (i = res+1; i < n; i++) {
	cout << " " << A[i];
    }
    cout << endl;

    return 0;
}