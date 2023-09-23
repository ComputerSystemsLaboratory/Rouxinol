#include<iostream>
using namespace std;
int main(){
	while (true){
		int n, A[10000] = {}, B[10000] = {}, tenA = 0, tenB = 0;
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++){
			cin >> A[i] >> B[i];
			if (A[i] > B[i]){
				tenA += A[i] + B[i];
			}
			if (A[i] == B[i]){
				tenA += A[i];
				tenB += B[i];
			}
			if (A[i] < B[i]){
				tenB += A[i] + B[i];
			}
		}
		cout << tenA << ' ' << tenB << endl;
	}
	return 0;
}