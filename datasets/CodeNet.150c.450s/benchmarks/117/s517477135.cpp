#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <list>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int t = 0;

void Merge(int A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1], R[n2];
  for (int i = 0; i <= n1-1; i++ ) L[i] = A[left + i];
  for (int i = 0; i <= n2-1; i++ ) R[i] = A[mid + i];
  L[n1] = 1000000000;
  R[n2] = 1000000000;
  int i = 0;
  int j = 0;
  for (int k = left; k <= right-1; k++) {
    if (L[i] <= R[j]) {
		A[k] = L[i];
        i = i + 1;
		t++;
	} else { 
		A[k] = R[j];
        j = j + 1;
		t++;
	}
  }
}

void MergeSort (int A[], int left, int right){
  if (left+1 < right) {
	  int mid = (left + right)/2;
      MergeSort(A, left, mid);
      MergeSort(A, mid, right);
      Merge(A, left, mid, right);
  }
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for( int i = 0; i < n; i++) cin >> a[i];
	MergeSort(a, 0, n);
	for( int i = 0; i < n; i++) {
		if( i ) cout << " " <<a[i];
		else cout << a[i];
	}
	cout <<endl << t <<endl;
	return 0;
}