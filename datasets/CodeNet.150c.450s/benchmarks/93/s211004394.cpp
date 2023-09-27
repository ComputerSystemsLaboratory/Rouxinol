#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <utility>
using namespace std;

typedef struct {
	char mark;
	int num;
} CARD;

void quickSort(CARD a[], int p, int r);
int partition(CARD a[], int p, int r);
bool isStable(const CARD t1[], const CARD t2[], int n);

int main(void)
{
	int n;
	cin >> n;
	CARD *a = new CARD[n];
	CARD *a0 = new CARD[n];

	for (int i = 0; i < n; i++) {
		cin >> a0[i].mark;
		cin >> a0[i].num;
		a[i] = a0[i];
	}

	quickSort(a, 0, n - 1);

	if (isStable(a0, a, n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i].mark << " ";
		cout << a[i].num << endl;
	}

	delete[] a, a0;
	return 0;
}

int partition(CARD a[], int p, int r)
{
	int x = a[r].num;
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j].num <= x) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void quickSort(CARD a[], int p, int r)
{
	if (p >= r) return;

	int q = partition(a, p, r);
	quickSort(a, p, q - 1);
	quickSort(a, q + 1, r);
}

bool isStable(const CARD t1[], const CARD t2[], int n)
{
	char m2[4] = { "\0" };
	int idx = 0;
	for (int i = 0; i < n; i++) {
		m2[idx] = t2[i].mark;
		idx++;
		if (i == n - 1 || t2[i].num != t2[i + 1].num) {
			idx = 0;
			for (int j = 0; j < n; j++) {
				if (t1[j].num == t2[i].num) {
					if (m2[idx] != t1[j].mark) return false;
					idx++;
					if (idx >= 3) break;
				}
			}
			
			idx = 0;
		}
	}
	return true;
}