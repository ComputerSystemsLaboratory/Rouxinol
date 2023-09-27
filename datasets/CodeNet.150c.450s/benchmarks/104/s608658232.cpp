#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int w, n, i, z, a, b;
	cin >> w >> n;
	vector<int> A(w);
	for (i = 0; i < w; i++) A[i] = i + 1;
	for (i = 0; i < n; i++) {
		scanf("%d,%d", &a, &b);
		z = A[a - 1];
		A[a-1] = A[b-1]; A[b-1] = z;
	}
	for (i = 0; i < w; i++) cout << A[i] << endl;
	return 0;
}