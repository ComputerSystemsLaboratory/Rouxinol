#include <iostream>
using namespace std;

int main()
{
	int n, temp, j, count = 0;
	cin >> n;
	int *p = new int[n];

	for (int i = 0; i < n; i++) cin >> p[i];

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (p[j] > p[j + 1]) {
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
				count++;
			}
		}
	}
	for (j = 0; j < n - 1; j++)
		cout << p[j] << " ";
	cout << p[j] << "\n" << count << "\n";

	delete[] p;
	return 0;
}