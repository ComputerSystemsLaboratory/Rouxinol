#include <bits/stdc++.h>
using namespace std;
struct Card { int value; char c; };
bool comp(const Card& l, const Card& r){ return l.value < r.value; }
int N;
Card stable[36];
Card tmp[36];
Card C[36];


void Out() {
	cout << C[0].c << C[0].value;
	for (int i = 1; i < N; i++)
		cout << ' ' << C[i].c << C[i].value;
	cout << endl;
	bool res = true;
	for (int i = 0; i < N; i++) {
		if (C[i].c != stable[i].c) {
			res = false;
		}
	}
	if (res)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
}

void BubbleSort() {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = N - 1; i >= 0; i--) {
			if (comp(C[i], C[i - 1])) {
				Card ca = C[i];
				C[i] = C[i - 1];
				C[i - 1] = ca;
				flag = true;
			}
		}
	}
}

void SelectionSort() {
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (comp(C[j], C[minj])) {
				minj = j;
			}
		}
		if (i != minj) {
			Card ca = C[i];
			C[i] = C[minj];
			C[minj] = ca;
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> C[i].c >> C[i].value;
		stable[i].c = tmp[i].c = C[i].c;
		stable[i].value = tmp[i].value = C[i].value;
	}
	stable_sort(stable, stable + N, comp);
	BubbleSort();
	Out();
	for (int i = 0; i < N; i++) C[i] = tmp[i];
	SelectionSort();
	Out();
	return 0;
}