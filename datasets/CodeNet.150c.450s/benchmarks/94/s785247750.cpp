#include <iostream>
#include <vector>
using namespace std;

int main(){
	long N;
	cin >> N;
	vector<long> A(N);
	for (long i = 0; i < N; i++){
		cin >> A[i];
	}
	bool flag = 1;
	long cnt = 0;
	while (flag){
		flag = 0;
		for (long j = N - 1; j > 0; j--){
			if (A[j] < A[j - 1]){
				long tmp = 0;
				tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
				flag = 1;
				cnt++;
			}
		}
	}
	for (long i = 0; i < N - 1; i++){
		cout << A[i] << " ";
	}
	cout << A[N - 1] << endl;
	cout << cnt << endl;
	return 0;
}