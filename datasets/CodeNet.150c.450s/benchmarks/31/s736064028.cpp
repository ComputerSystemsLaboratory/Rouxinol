#include <iostream>
#include <limits.h> 
using namespace std;

int main(void){
	int N, *A, dif, max, minID, maxID;

	cin >> N;

	A = new int[N];
	maxID = 1;
	minID = 0;

	for (int i = 0; i < 2; i++){
		cin >> A[i];
	}

	max = A[maxID] - A[minID];
	if (A[maxID] < A[minID]){
		minID = 1;
	}

	for (int i = 2; i < N; i++){
		cin >> A[i];		

		if (minID > maxID || A[maxID] < A[i]){
			maxID = i;
			if (max < A[maxID] - A[minID] && maxID > minID) max = A[maxID] - A[minID];
		}
		if (A[minID] > A[i]){
			minID = i;
		}
	}

	cout << max << "\n";

	return 0;
}