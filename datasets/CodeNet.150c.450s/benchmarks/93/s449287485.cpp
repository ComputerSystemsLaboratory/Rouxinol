#include <cstdio>
#include <algorithm>
#include <iostream>
#define SENTINEL 2000000000
#pragma warning(disable:4996)
using namespace std;
typedef struct {
	char c;
	int num;
}Card;
Card card[100050], a[100050];
bool flag = true;
int partition(int, int);
void quickSort(int, int);
void merge(int, int, int);
void mergeSort(int, int);
bool cmp(Card a, Card b) {
	return a.num <= b.num;
}
bool cmp2(Card a, Card b) {
	return a.c == b.c&&a.num == b.num;
}
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> card[i].c >> card[i].num;
		a[i].c = card[i].c;
		a[i].num = card[i].num;
	}
	quickSort(0, n - 1);
	mergeSort(0, n);
	for (int i = 0; i < n; i++) {
		if (cmp2(card[i], a[i]) == false) {
			cout << "Not stable" << endl;
			flag = false;
			break;
		}
	}
	if (flag==true)
		cout << "Stable" << endl;
	for (int i = 0; i<n; i++)
		printf("%c %d\n", card[i].c, card[i].num);
	return 0;
}
int partition(int p, int r) {
	Card x = card[r];
	int i = p - 1;
	for (int j = p; j<r; j++) {
		if (cmp(card[j], x)) {
			i++;
			std::swap(card[i], card[j]);
		}
	}
	std::swap(card[i + 1], card[r]);
	return i + 1;
}
void quickSort(int p, int r) {
	if (p<r) {
		int q = partition(p, r);
		quickSort(p, q - 1);
		quickSort(q + 1, r);
	}
}
void mergeSort(int left, int right) {
	if (left + 1<right) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}
void merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	Card L[n1 + 1], R[n2 + 1];
	for (int i = 0; i<n1; i++)
		L[i] = a[left + i];
	for (int i = 0; i<n2; i++)
		R[i] = a[mid + i];
	L[n1].num = SENTINEL;
	R[n2].num = SENTINEL;
	int i = 0, j = 0;
	for (int k = left; k<right; k++) {
		if (cmp(L[i], R[j])) {
			a[k] = L[i];
			i++;
		} else {
			a[k] = R[j];
			j++;
		}
	}
}
