#include <bits/stdc++.h>
#define MAX_N 100000
using namespace std;
int n;
struct Card {
	int value;
	char mark;
	bool operator!=(const Card& card) {
		return value != card.value || mark != card.mark;
	}
};
Card A[MAX_N], S[MAX_N];


int Partition(int p, int r) {
	int x = A[r].value, i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].value <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void QuickSort(int p, int r) {
	if (p < r) {
		int q = Partition(p, r);
		QuickSort(p, q - 1);
		QuickSort(q + 1, r);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i].mark >> A[i].value;
		S[i] = A[i];
	}
	stable_sort(S, S + n, [](const Card& l, const Card& r) { return l.value < r.value; });
	QuickSort(0, n - 1);
	bool st = true;
	for (int i = 0; i < n; i++) {
		if (A[i] != S[i]) {
			st = false;
			break;
		}
	}
	cout << (st ? "Stable" : "Not stable") << endl;
	for_each(A, A + n, [](const Card& c) {
		cout << c.mark << ' ' << c.value << endl;
	});
	return 0;
}