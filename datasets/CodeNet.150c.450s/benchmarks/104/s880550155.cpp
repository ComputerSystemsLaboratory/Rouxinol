#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int w, n;
	int a, b;
	cin >> w >> n;
	int *W = new int[w];
	for (int i = 0; i < w; i++)
		W[i] = i + 1;

	for (int i = 0; i < n; i++) {
		scanf("%d,%d", &a, &b);
		swap(W[a-1], W[b-1]);
	}

	for (int i = 0; i < w; i++)
		cout << W[i] << endl;

	delete[] W;
	return 0;
}