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
int knapsack(int w, int n,int v[],int ww[]) {
	int W[101][10001];
		for (int j = 0;j <= w;j++) {
			W[0][j] = 0;
		}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= w;j++) {
			if (j - ww[i] < 0) {
				W[i+1][j] = W[i][j];
			}
			if (j - ww[i] >= 0) {
				W[i+1][j] = max(W[i][j], W[i][j - ww[i]] + v[i]);

			}
		}
	}
	return W[n][w];
}
int main() {
		int N,W;
		cin >> N>>W;
		int v[100];
		int w[100];
		for (int i = 0;i < N;i++) {
			cin >> v[i] >> w[i];
		}
		cout << knapsack(W, N, v, w)<<endl;
}