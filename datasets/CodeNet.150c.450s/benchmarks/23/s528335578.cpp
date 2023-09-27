#include<iostream>
#define MAX 45
using namespace std;

void Fibonachi(int F[], int n) {
	F[0] = F[1] = 1;
	for (int i = 2; i <= n; i++) {
		F[i] = F[i - 2] + F[i - 1];
	}
}

int main() {
	int n,F[MAX];
	cin >> n;
	Fibonachi(F,n);
	cout << F[n] << endl;
	return 0;
}