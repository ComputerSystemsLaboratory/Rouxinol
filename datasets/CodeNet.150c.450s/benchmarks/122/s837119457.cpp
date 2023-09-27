#include <bits/stdc++.h>
using namespace std;

#define INFTY 2000000000
#define MAX 2000000

int A[MAX + 1];
int H = 0;

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

void insert(int k) {
	H++;
	A[H] = k;
	int c = H;
	while (c > 1 && A[p(c)] < A[c]) {
		swap(A[p(c)], A[c]);
		c = p(c);
	}
}

int extract() {
	int max = A[1];
	A[1] = A[H];
	H--;
	maxheapify(1);
	return max;
}

int main() {
	string cmd;
	while (true) {
		cin >> cmd;
		if (cmd == "end") {
			break;
		} else if (cmd == "insert") {
			int k;
			cin >> k;
			insert(k);
		} else {
			cout << extract() << endl;
		}
	}
	return 0;
}

