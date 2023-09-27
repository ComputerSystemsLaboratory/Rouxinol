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
	bool flag = true;
	while(flag){
		flag = false;
		for(int j = N - 1; j >= 1; --j){
			if(A[j] < A[j - 1]){
				swap(A[j], A[j - 1]);
				++cnt;
				flag = true;
			}
		}
	}
	for(int i = 0; i < N - 1; ++i) cout << A[i] << " ";
	cout << A[N - 1] << endl;
	cout << cnt << endl;
	
	return 0;
}