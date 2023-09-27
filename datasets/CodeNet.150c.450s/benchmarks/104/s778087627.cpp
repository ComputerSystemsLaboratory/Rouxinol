#include <algorithm>
#include <iostream>
using namespace std;

int main()
{

	int w, n;
	cin >> w >> n;
	int A[30];
	for (int i = 0; i < w; i++) {
		A[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		int a, b;
		char kannma;
		cin >> a >> kannma >> b;
		swap(A[a - 1], A[b - 1]);
	}
	for (int i = 0; i < w; i++) {
		cout << A[i] << endl;
	}
	return 0;
}