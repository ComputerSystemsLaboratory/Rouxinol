#include "bits/stdc++.h"
using namespace std;

int selectionSort(vector<int>& A, int N);

int main(void) {
	
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);
	
	int count = selectionSort(A, N);

	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A.at(i);
	}
	cout << endl;
	cout << count << endl;
	
	return 0;
}


int selectionSort(vector<int>& A, int N) {

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		int minJ = i;
		for (int j = i; j < N; j++)
		{
			if (A.at(j) < A.at(minJ)) {
				minJ = j;
			}
		}
		
		if (minJ != i) {
			swap(A.at(minJ), A.at(i));
			count++;
		}
	}
	return count;
}
