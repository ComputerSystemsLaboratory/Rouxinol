#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, evacuation,num;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) cout << A[i] << ((i == N - 1) ? '\n' : ' '); //出力している

	for (int j = 1; j < N; j++) {
		evacuation = A[j];
		num = j - 1;

		while (num>=0 && A[num] > evacuation)
		{
			swap(A[num], A[num + 1]);
			num--;
		}

		for (int i = 0; i < N; i++) cout << A[i] << ((i == N - 1) ? '\n' : ' '); //出力している
	}

	return 0;
}


