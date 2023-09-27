#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

void a(int A[], int N) {
	for (int k = 0; k < N; k++) {
		cout << A[k];
		if (k != N - 1)cout << " ";
	}
	cout << endl;
}

void insertionSort(int A[], int N) {
	a(A, N);
	for (int i = 1; i < N; i++) {
		int v = A[i],
			j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		a(A, N);
	}
}

int main() {
	int N;	cin >> N;
	int A[1000];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	insertionSort(A, N);
	return 0;
}