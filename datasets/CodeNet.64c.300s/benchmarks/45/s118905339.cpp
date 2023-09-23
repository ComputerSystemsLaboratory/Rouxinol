#include<iostream>

using namespace std;

int main(){

	int N, M, P;
	int X, ok, sum;

	while (1){

		cin >> N >> M >> P;
		if (N == 0 && M == 0 && P == 0) break;

		sum = 0, ok = 0;
		for (int i = 1; i <= N; i++){
			cin >> X;
			sum += X;
			if (i == M) ok += X;
		}

		if (ok == 0) cout << "0" << endl;
		else cout << (sum*(100-P)) / ok << endl;
	}

	return 0;

}