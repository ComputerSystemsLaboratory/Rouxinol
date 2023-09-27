#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

struct Card {char s; int no; int o;};

int Partition(Card *A, int p, int r) {
	int x = A[r].no;
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].no <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i + 1;
}

void quickSort(Card *A, int p, int r) {
	if (p < r) {
		int q = Partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}

void isStable(Card *A, int len) {
	bool stable = true;
	for (int i = 0; i < len-1; i++)
		if (A[i].no == A[i+1].no)
			if (A[i].o > A[i+1].o)
				stable = false;
	cout << (stable == true ? "Stable" : "Not stable") << endl;
}

int main() {
	int n;
	cin >> n;
	Card *A = new Card[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i].s >> A[i].no;
		A[i].o = i;
	}
	quickSort(A, 0, n - 1);
	isStable(A, n);
	for (int i = 0; i < n; i++)
		cout << A[i].s << " " << A[i].no << endl;
	delete[] A;
	return 0;
}