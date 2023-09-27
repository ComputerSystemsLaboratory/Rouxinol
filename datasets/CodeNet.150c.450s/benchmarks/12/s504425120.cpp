#include<iostream>
#include<cstdio>

using namespace std;

void node(int i, int h[]) {
	cout << "node " << i << ": key = "<<  h[i] << ", ";
}
void parent(int i, int n, int h[]) {
	int p = i / 2;
	if (p > 0) {
		cout << "parent key = " << h[p] << ", ";

	}
}
void left(int i, int n,int h[]) {
	int l = 2 * i;
	if (l <= n) {
		cout << "left key = " << h[l] << ", ";
	}
}
void right(int i, int n, int h[]) {
	int r = 2 * i + 1;
	if (r <= n) {
		cout << "right key = " << h[r] << ", ";
	}
}

int main() {
	int N;
	int H[1000];

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> H[i];
	}

	for (int i = 1; i <= N;i++) {
		node(i, H);
		parent(i, N, H);
		left(i, N, H);
		right(i, N, H);
		cout << endl;
	}

	return 0;

}
