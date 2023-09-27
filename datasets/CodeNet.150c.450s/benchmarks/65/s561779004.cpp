#include <iostream>
using namespace std;
static int N_MAX = 100;

struct Pair {
	int value;
	char kind;	
};

void p(Pair C[], int N) {
	for (int i = 0; i < N; ++i) {
		if (i > 0) cout << " ";
		cout << C[i].kind << C[i].value;
	}
	cout << endl;
}

void swap(Pair &a, Pair &b) {
	Pair c = a;
	a = b;
	b = c;
}


void BubbleSort(Pair C[], int N) {
	for (int i = 0; i < N; ++i) {
		for (int j = N - 1; j > i; --j)
			if (C[j].value < C[j - 1].value) {
				swap(C[j], C[j-1]);
			}
	}
}

void SelectionSort(Pair C[], int N) {
	for (int i = 0; i < N; ++i) {
		int minj = i;
		for (int j = i; j < N; ++j)
			if (C[j].value < C[minj].value) minj = j;
		swap(C[i], C[minj]);
	}
}

bool isStable(Pair C[], Pair D[], int N) {
	for (int i = 0; i < N - 1; ++i) {
		int j = i + 1;
		if (C[i].value == C[j].value) {
			int k = 0, l = 0;
			for (; k < N; ++k)
				if (D[k].value == C[i].value && D[k].kind == C[i].kind)
					break;
			for (; l < N; ++l)
				if (D[l].value == C[j].value && D[l].kind == C[j].kind)
					break;
			if (k > l)
				return false;
		}
	}
	return true;
}

int main() {
	int N;
	Pair C[N_MAX];
	Pair D[N_MAX];
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> C[i].kind >> C[i].value;
	}
	for (int i = 0; i < N; ++i) D[i] = C[i];

	BubbleSort(D, N);
	p(D, N);
	cout << (isStable(D, C, N) ? "Stable" : "Not stable") << endl;

	for (int i = 0; i < N; ++i) D[i] = C[i];
	SelectionSort(D, N);
	p(D, N);
	cout << (isStable(D, C, N) ? "Stable" : "Not stable") << endl;

	return 0;
}