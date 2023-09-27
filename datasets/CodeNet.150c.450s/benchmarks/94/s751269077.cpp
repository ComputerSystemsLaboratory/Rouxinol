#include<iostream>
using namespace std;

int main() {
	int n, a[100], i, j, flag, hoge, counta = 0;
	cin >> n;
	for (i = 0; i < n; i++)cin >> a[i];
	flag = 1;
	while (flag) {
		flag = 0;
		i = 0;
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				hoge = a[j];
				a[j] = a[j - 1];
				a[j - 1] = hoge;
				flag = 1;
				counta++;
			}
		}
		i++;
	}
	for (i = 0; i < n; i++) {
		if (i > 0)cout << " ";
		cout << a[i];
	}
	cout << endl << counta << endl;
}
