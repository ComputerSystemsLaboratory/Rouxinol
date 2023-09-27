#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; ++i){
		cin >> A[i];
	}
	
	int cnt = 0;
	for(int i = 0; i < N; ++i){
		int minj = i;
		for(int j = i; j < N; ++j){
			if(A[j] < A[minj]) minj = j;
		}
		if(i != minj){
			++cnt;
			swap(A[i], A[minj]);
		}
	}
	
	for(int i = 0; i < N - 1; i++) cout << A[i] << " ";
	cout << A[N - 1] << endl;
	cout << cnt << endl;
	return 0;
}