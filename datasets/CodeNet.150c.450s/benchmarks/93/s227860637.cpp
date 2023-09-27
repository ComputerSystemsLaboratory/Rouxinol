#include <iostream>
using namespace std;
#define Nmax 100000
#define INF 2000000000

struct card
{
	char suit;
	int value;
};

card L[Nmax / 2 + 2];
card R[Nmax / 2 + 2];

int partition(card a[],int p, int r)
{
	card x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j].value <= x.value) {
			i++;
			card temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	card temp = a[i + 1];
	a[i + 1] = a[r];
	a[r] = temp;
	return (i + 1);
}

void quickSort(card a[], int p, int r)
{
	if (p < r) {
		int q = partition(a, p, r);
		quickSort(a, p, q - 1);
		quickSort(a, q + 1, r);
	}
}

void merge(card a[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	
	for (int i = 0; i < n1; i++) {
		L[i] = a[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = a[mid + i];
	}
	L[n1].value = INF;
	R[n2].value = INF;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].value <= R[j].value) {
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
	}
}

void mergeSort(card a[], int left, int right)
{
	if ((left + 1) < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}

int main()
{
	card a[Nmax];
	card b[Nmax];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char ch;
		int m;
		cin >> ch >> m;
		a[i].suit = b[i].suit = ch;
		a[i].value = b[i].value = m;
	}

	quickSort(a, 0, n - 1);
	mergeSort(b, 0, n);

	bool stable = true;
	for (int i = 0; i < n; i++) {
		if (a[i].suit != b[i].suit) {
			stable = false;
			break;
		}
	}

	cout << (stable ? "Stable" : "Not stable") << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i].suit << " " << a[i].value << endl;
	}

	return 0;
	
}
