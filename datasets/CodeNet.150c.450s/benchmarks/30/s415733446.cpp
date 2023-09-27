#include <iostream>
using namespace std;

int main()
{
	int n, j, count = 0;
	cin >> n;
	int *p = new int[n];

	for (int i = 0; i < n; i++) cin >> p[i];

	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (p[j] < p[min]) min = j;
		}
		if (min != i) {
			swap(p[i], p[min]);
			count++;
		}
	}
	for (j = 0; j < n - 1; j++)
		cout << p[j] << " ";
	cout << p[j] << "\n" << count << "\n";

	delete[] p;
	return 0;
}