#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define INF 10000000; 


int partition(int A[],int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = p;j < r;j++) {
		if (x >= A[j]) {
			i = i + 1;
			swap(A[i], A[j]);
		}
	}
		swap(A[i + 1], A[r]);
		return i + 1;
}
void quicksort(int A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quicksort(A, p, q-1);
		quicksort(A, q + 1, r);
	}
}

int getNumberOfCoin(int C[],int n,int m) {
	int T[50000];
	for (int j = 0;j <= n;j++) {
		T[j] = INF;
	}
	T[0] = 0;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j <= n;j++) {
			if (j - C[i] >=0  ) {
				T[j] = min(T[j], T[j - C[i]] + 1);
			}
		}
	}
	return T[n];
}

int main() {
		int n,m;
		cin >> n>>m;
		int C[20];
		for (int i = 0;i < m;i++) {
			cin >> C[i];
		}
		cout<<getNumberOfCoin(C,n,m)<<endl;


}