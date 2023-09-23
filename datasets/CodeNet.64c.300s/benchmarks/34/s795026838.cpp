#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N, A[1001];
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
	print_r();
	for (int i = 1; i < N; i++) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j+1] = A[j];
			j--;
		}
		A[j + 1] = v;
		print_r();
	}
	return 0;
}