#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

const double PI = 3.14159265358979;

struct Card {
	char suit;
	int val;
};


void merge(Card a[], int left, int mid, int right) {

	//if (right - left == 1) return;

	int Llen = mid - left;
	int Rlen = right - mid;
	Card* L = new Card[Llen + 1];
	Card* R = new Card[Rlen + 1];

	for (int i = 0; i < Llen; i++) {
		L[i] = a[left + i];
	}
	L[Llen].val = INT_MAX;
	for (int i = 0; i < Rlen; i++) {
		R[i] = a[mid + i];
	}
	R[Rlen].val = INT_MAX;

	int ll = 0, rr = 0;
	for (int i = left; i < right; i++) {

		if (L[ll].val <= R[rr].val) {
			a[i] = L[ll++];
		}
		else {
			a[i] = R[rr++];
		}
	}

	delete[] L;
	delete[] R;
}

void mergeSort(Card a[], int left, int right) {

	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}


void printArr(Card a[], int len) {

	for (int i = 0; i < len; i++) {
		printf("%c %d\n", a[i].suit, a[i].val);
	}
}


int partition(Card a[], int left, int right) {

	//if (right - left <= 1) return left;

	int i = left - 1;

	for (int j = left; j < right - 1; j++) {

		if (a[j].val <= a[right - 1].val) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[++i], a[right - 1]);
	return i;
}

void quickSort(Card a[], int left, int right) {

	if (right > left) {
		int pos = partition(a, left, right);
		quickSort(a, left, pos);
		quickSort(a, pos+1, right);
	}
}


int main() {

	int n; scanf("%d", &n);
	Card* a1 = new Card[n];
	Card* a2 = new Card[n];
	char str[5];
	for (int i = 0; i < n; i++)	{
		Card c;
		scanf("%s%d", str, &c.val);
		c.suit = str[0];
		a1[i] = c;
		a2[i] = c;
	}

	quickSort(a1, 0, n);
	mergeSort(a2, 0, n);

	int flag = true;
	for (int i = 0; i < n; i++) {
		if (a1[i].suit != a2[i].suit) {
			flag = false;
			break;
		}
	}
	if (flag) cout << "Stable\n";
	else cout << "Not stable\n";

	printArr(a1, n);

	delete[] a1;
	delete[] a2;
	return 0;
}

