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

string A[36], B[36];

void bubbleSort(string A[], int N) {
	bool flag = true;
	//i:??????????????¨?????????????????????????????????
	for (int i = 0; flag; i++) {
		flag = false;
		for (int j = N - 1; j >= i + 1; j--) {
			if (A[j][1] < A[j - 1][1]) {
				swap(A[j], A[j - 1]);
				flag = 1;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << A[i];
		if (i != N - 1)cout << " ";
	}
	cout << endl;
	cout << "Stable" << endl;
}

void selectionSort(string B[], int N) {
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i + 1; j < N; j++) {
			if (B[j][1] < B[minj][1]) {
				minj = j;
			}
		}
		swap(B[i], B[minj]);
	}

	for (int i = 0; i < N; i++) {
		cout << B[i];
		if (i != N - 1)cout << " ";
	}
	cout << endl;

	for (int i = 0; i < N; i++) {
		if (A[i] != B[i]) {
			cout << "Not stable" << endl;
			return;
		}
	}
	cout << "Stable" << endl;
}


int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++)	{
		cin >> A[i];
		B[i] = A[i];
	}
	bubbleSort(A, N);
	selectionSort(B, N);

	return 0;
}