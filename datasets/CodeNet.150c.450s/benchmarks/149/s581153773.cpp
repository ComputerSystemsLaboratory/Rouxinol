#include<iostream>
using namespace std;

static const int MAX = 10000;

int P[MAX], H[MAX];

void unite(int u1, int u2) {
	while (P[u1] != u1) u1 = P[u1];
	while (P[u2] != u2) u2 = P[u2];
	if (H[u1] < H[u2]) P[u1] = u2;
	else if (H[u1] > H[u2]) P[u2] = u1;
	else {
		P[u2] = u1;
		H[u1]++;
	}
} 

int same(int n1, int n2) {
	while (P[n1] != n1) n1 = P[n1];
	while (P[n2] != n2) n2 = P[n2];
	if (n1 == n2) return 1;
	else return 0;
}

int main() {
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++)	{
		P[i] = i;
		H[i] = 0;
	}

	for (int i = 0 ; i < q; i++) {
		int cmd, f, s;
		cin >> cmd >> f >> s;
		if (cmd) cout << same(f, s) << endl;
		else unite(f, s);
	}
	return 0;
}