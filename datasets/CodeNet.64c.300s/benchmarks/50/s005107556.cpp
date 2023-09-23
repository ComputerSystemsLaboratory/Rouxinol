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
	while (flag) {
		flag = false;
		for (int i = N - 1; i >= 1; i--) {
			if (A[i] < A[i-1]) {
				int p = A[i];
				A[i] = A[i-1];
				A[i-1] = p;
				c++;
				flag = true;
			}
		}
	}
	print_r();
	cout << c << endl;
	return 0;
}