#include <iostream>
#include <vector>
using namespace std;

int main(){
	long cnt = 0;
	long minj, tmp;
	long N;
	cin >> N;
	vector<long> A(N);
	for (long i = 0; i < N; i++){
		cin >> A[i];
	}
	for (long i = 0; i < N; i++){
		minj = i;
		for (long j = i; j < N; j++){
			if (A[j] < A[minj]){
				minj = j;
			}
		}
		tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
		if (tmp != A[i]) cnt++;
	}
	for (long i = 0; i < N - 1; i++){
		cout << A[i] << " ";
	}
	cout << A[N - 1] << endl;
	cout << cnt << endl;
	return 0;
}