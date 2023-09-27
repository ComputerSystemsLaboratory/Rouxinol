#include <bits/stdc++.h>
using namespace std;

int H;
int A[500001];

int p(int u) {
	return u / 2;
}

int l(int u) {
	return (2 * u <= H ? 2 * u : 0);
}

int r(int u) {
	return (2 * u + 1 <= H ? 2 * u + 1 : 0);
}

void maxheapify(int u) {
	int max = u;
	if (l(u) && A[l(u)] > A[u])
		max = l(u);
	if (r(u) && A[r(u)] > A[max])
		max = r(u);
	if (max != u) {
		swap(A[max], A[u]);
		maxheapify(max);
	}
}

void buildmaxheap() {
	for (int i = H / 2; i > 0; i--)
		maxheapify(i);
}

int main() {
	cin >> H;
	for (int i = 1; i <= H; i++)
		cin >> A[i];
	buildmaxheap();
	for (int i = 1; i <= H; i++)
		cout << " " << A[i];
	cout << endl;
	return 0;
}

