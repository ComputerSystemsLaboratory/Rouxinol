#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <queue>

using namespace std;

int S[10000];
int n;

void unite(int x, int y) {
	int SetID1 = S[x];
	int SetID2 = S[y];
	if (SetID1 > SetID2) {
		for (int i = 0; i < n; i++) {
			if (S[i] == SetID2) {
				S[i] = SetID1;
			}
		}
	}
	else if (SetID1 < SetID2) {
		for (int i = 0; i < n; i++) {
			if (S[i] == SetID1) {
				S[i] = SetID2;
			}
		}
	}
}

int same(int x, int y) {
	return (S[x]==S[y]) ? 1 : 0;
}

int main() {
	int q;
	int com, x, y;
	cin >> n >> q;
	
	for (int i = 0; i < n; i++) {
		S[i] = i;
	}
	
	for (int i = 1; i <= q; i++) {
		cin >> com >> x >> y;
		if (com == 0) {
			unite(x, y);
		}
		else {
			printf("%d\n", same(x, y));
		}
	}
	return 0;
}