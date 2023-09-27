#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N, A[101];
void print_r() {
	for (int i = 0; i < N; i++) {
		cout << A[i];
		if (i != N - 1) cout << " ";
	}
	cout << endl;
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	bool flag = true;
	int c = 0;
	for (int i = 0; i < N; i++) {
		int minj = i;
		for(int j=i; j < N; j++) {
			if (A[j] < A[minj]) minj = j;
		}
		if (minj != i) {
			int oldi = A[i];
			A[i] = A[minj];
			A[minj] = oldi;
			c++;
		}
	}
	print_r();
	cout << c << endl;
	return 0;
}