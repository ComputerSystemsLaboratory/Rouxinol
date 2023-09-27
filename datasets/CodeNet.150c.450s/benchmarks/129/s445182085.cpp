#include<iostream>
using namespace std;

int main()
{
	int r, c, A[100][100], R[100], C[100], sum = 0;

	cin >> r >> c;

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			A[i][j] = 0;
			R[i] = 0;
			C[j] = 0;
		}
	}

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin >> A[i][j];
			R[i] += A[i][j];
			C[j] += A[i][j];
			sum += A[i][j];
		}
	}

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cout << A[i][j] << " ";
		}
		cout << R[i] << endl;
	}
	for (int j = 0; j < c; j++){
		cout << C[j] << " ";
	}
	cout << sum << endl;

	return 0;
}