#include<iostream>
#define INF 1000000000
using namespace std;

struct Card {
	char suit;
	int num;
};

void merge(Card a[], int left, int mid, int right);
void mergeSort(Card a[], int left, int right);
int partition(Card a[], int p, int r);
void quickSort(Card a[], int p, int r);
bool isStable(Card a[], Card b[], int n);


int main() {
	int i, j, n;
	Card c1[100000], c2[100000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> c1[i].suit >> c1[i].num;
		c2[i] = c1[i];
	}
	quickSort(c1, 0, n - 1);
	mergeSort(c2, 0, n);
	if (isStable(c1, c2, n) == true)cout << "Stable\n";
	else cout << "Not stable\n";
	for (i = 0; i < n; i++) {
		cout << c1[i].suit << " " << c1[i].num << endl;
	}
	return 0;
}

int partition(Card a[], int p, int r) {
	int i, j, x;
	x = a[r].num;
	i = p - 1;
	for (j = p; j < r; j++) {
		if (a[j].num <= x) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void quickSort(Card a[], int p, int r) {
	int q;
	if (p < r) {
		q = partition(a, p, r);
		quickSort(a, p, q - 1);
		quickSort(a, q + 1, r);
	}
}

void merge(Card a[], int left, int mid, int right) {
	int i, j, k, n1, n2;
	Card l[50001], r[50001];
	n1 = mid - left;
	n2 = right - mid;
	for (i = 0; i < n1; i++) {
		l[i] = a[left + i];
	}
	for (i = 0; i < n2; i++) {
		r[i] = a[mid + i];
	}
	l[n1].num = INF;
	r[n2].num = INF;
	i = 0;
	j = 0;
	for (k = left; k < right; k++) {
		if (l[i].num <= r[j].num) {
			a[k] = l[i];
			i++;
		} else {
			a[k] = r[j];
			j++;
		}
	}
}

void mergeSort(Card a[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}

bool isStable(Card a[], Card b[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i].suit != b[i].suit || a[i].num != b[i].num)return false;
	}
	return true;
}