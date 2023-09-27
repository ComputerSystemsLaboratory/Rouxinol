#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <deque>
#define ll long long

using namespace std;

struct Card { char mark; int val; };

vector<Card>A;

int partition(int p,int r) {
	Card x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].val <= x.val) {
			i++;
			Card mp = A[i];
			A[i] = A[j];
			A[j] = mp;
		}
	}
	Card kp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = kp;
	return i + 1;
}

void quickSort(int p, int r) {
	if (p < r) {
		int q = partition(p, r);
		quickSort(p, q - 1);
		quickSort(q + 1, r);
	}
}

vector<Card>B;

void merge(int p, int m, int r) {
	vector<Card> L(m - p + 1);
	vector<Card> R(r - m + 1);
	for (int i = 0; i < m - p; i++) {
		L[i] = B[p + i];
	}
	for (int i = 0; i < r - m; i++) {
		R[i] = B[m + i];
	}
	L[m - p].mark = 'X';
	L[m - p].val = 100010;
	R[r - m].mark = 'X';
	R[r - m].val = 100010;
	int curL = 0;
	int curR = 0;


	for (int i = p; i < r; i++) {
		if (L[curL].val <= R[curR].val) {
			B[i] = L[curL];
			curL++;
		}
		else {
			B[i] = R[curR];
			curR++;
		}
	}
}


void mergeSort(int p, int r) {
	if (p + 1 < r) {
		int md = (p + r) / 2;
		mergeSort(p, md);
		mergeSort(md, r);
		merge(p, md, r);
	}
}


int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		Card c; cin >> c.mark >> c.val;
		A.push_back(c);
		B.push_back(c);
	}
	quickSort(0, N - 1);
	mergeSort(0, N);
	bool isStable = true;
	for (int i = 0; i < N; i++) {
		if (A[i].mark != B[i].mark) {
			isStable = false;
			break;
		}
	}
	if (isStable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (int i = 0; i < A.size();i++) {
		Card c = A[i];
		cout << c.mark << " " << c.val << endl;
	}

	return 0;
}



