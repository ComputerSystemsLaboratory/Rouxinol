#include <iostream>

using namespace std;

int main() {
	int N, i, A[100], j, mini, s, k, count = 0;
	cin >> N;
	for (i = 0; i<N; i++)
		cin >> A[i];
	for (i = 0; i<N; i++) {
		mini = i;
		for (j = i; j<N; j++){
			if (A[j] < A[mini]) {
				mini = j; 
			}
		}
		if (mini != i) {
			s = A[i];
			A[i] = A[mini];
			A[mini] = s;
			count++;
		}
	}
	for (k = 0; k<N; k++) {
		if (k<N - 1)  cout << A[k] << " ";
		else cout << A[k] << endl;
	}
	cout << count << endl;
}