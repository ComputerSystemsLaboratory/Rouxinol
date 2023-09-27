#include<iostream>
#define MAX 100
using namespace std;

int G[MAX][MAX];

void arrayInit(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			G[i][j] = 0;
		}
	}
}

void input(int n) {
	int m, g, k;
	for (int i = 0; i < n; i++) {
		cin >> m >> k;
		--m;
		for (int j = 0; j < k; j++) {
			cin >> g;
			--g;
			G[m][g] = 1;
		}
	}
}

void output(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j)cout << " ";
			cout << G[i][j];
		}
		cout << endl;
	}
}

int main() {
	int size;
	cin >> size;
	arrayInit(size);
	input(size);
	output(size);
	return 0;
}