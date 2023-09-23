#include <iostream>
#define MAXN 110
using namespace std;

int a[MAXN];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = 0; j < n; j++) {
		cout << a[j];
		if (j != n - 1) cout << ' ';
		else cout << endl;
	}
	for (int i = 1; i < n; i++) {
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		for (int j = 0; j < n; j++) {
			cout << a[j];
			if (j != n - 1) cout << ' ';
			else cout << endl;
		}
	}
    return 0;
}
