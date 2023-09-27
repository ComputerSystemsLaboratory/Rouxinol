#include<iostream>
using namespace std;
int main(){

	int a, b, c;
	int A[10000] = { 0 };
	int M;
	int N = 0;

	cin >> a >> b >> c;

	for (int i = 0; i <= b - a; i++){
		A[i] = a + i;

		M = c%A[i];
		if (M == 0){
			N = N + 1;
		}
	}

	cout << N << endl;

	return 0;
}