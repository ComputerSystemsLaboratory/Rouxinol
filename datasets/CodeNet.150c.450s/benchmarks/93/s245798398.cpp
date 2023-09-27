#include <iostream>
using namespace std;

int n = 0, a[200000] = { 0 };
char s[200001];
bool f = 0;

int partition(int a[200000], char s[200001], int p, int r) {
	int x = a[r - 1];
	int i = p - 1;

	for (int j = p; j < r; j++) {
		if (a[j - 1] <= x) {
			i++;
			swap(a[i - 1], a[j - 1]);
			swap(s[i - 1], s[j - 1]);
		}
	}
	swap(a[i], a[r - 1]);
	swap(s[i], s[r - 1]);

	if (r > i + 1 && (i - p + 2) % (r - i - 1) != 0)
		f = true;

	return i + 1;
}

void QuickSort(int a[200000], char s[200001], int p, int r) {
	if (p < r) {
		int q = partition(a, s, p, r);
		QuickSort(a, s, p, q - 1);
		QuickSort(a, s, q + 1, r);
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> s[i] >> a[i];

	QuickSort(a, s, 1, n);

	if (f)
		cout << "Not stable" << endl;
	else
		cout << "Stable" << endl;

	for (int i = 0; i < n; i++)
		cout << s[i] << " " << a[i] << endl;

    return 0;
}