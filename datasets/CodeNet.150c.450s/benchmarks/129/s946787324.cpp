#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
int main() {
	int r, c;
	cin >> r >> c;
	vvi A(r + 1, vi(c + 1));
	for (int i = 0; i < r; i++) {
		for (int k = 0; k < c; k++) {
			cin >> A[i][k];
		}
	}
	for (int i = 0; i < r; i++) {
		A[i][c] = 0;
	}
	for (int i = 0; i < c; i++) {
		A[r][i] = 0;
	}
	A[r][c] = 0;
	for (int i = 0; i < r; i++) {
		for (int k = 0; k < c; k++) {
			A[i][c] += A[i][k];
		}
	}
	for (int i = 0; i < c;i++) {
		for (int k = 0; k < r; k++) {
			A[r][i] += A[k][i];
		}
	}
	for (int i = 0; i < r; i++) {
		A[r][c] += A[i][c];
	}
	for (int i = 0; i < r + 1; i++) {
		for (int k = 0; k < c + 1; k++) {
			if (k == c) {
				cout << A[i][k] << endl;
			}
			else {
				cout << A[i][k] << " ";
			}
		}
	}
}