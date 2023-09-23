#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int a[10000] = { 0 };
	int	b[10000] = { 0 };
	cin >> num;
	while (num != 0) {
		int ap = 0;
		int	bp = 0;
		for (int i = 0; i < num; i++) {
			cin >> a[i] >> b[i];
			if (a[i] > b[i]) ap += a[i] + b[i];
			else if (a[i] < b[i]) bp += a[i] + b[i];
			else {
				ap += a[i];
				bp += b[i];
			}
		}
		cout << ap << " " << bp << endl;
		cin >> num;
	}
}