#include<iostream>
using namespace std;

int main()
{
	int n, num;
	char m;
	int a[1 + 13 * 4] = { 0 };
	cin >> n;
	while (n--) {
		cin >> m >> num;
		if (m == 'S')a[num] = 1;
		else if (m == 'H')a[num + 13] = 1;
		else if (m == 'C')a[num + 13 * 2] = 1;
		else a[num + 13 * 3] = 1;
	}
	for (int i = 1; i <= 52; i++) {
		if (!(a[i])) {
			if (1 <= i && i <= 13) {
				cout << "S " << i << endl;
			}
			else if (14 <= i && i <= 13 * 2) {
				cout << "H " << i - 13 << endl;
			}
			else if (13 * 2 + 1 <= i && i <= 13 * 3) {
				cout << "C " << i - 13 * 2 << endl;
			}
			else if (13 * 3 + 1 <= i && i <= 13 * 4) {
				cout << "D " << i - 13 * 3 << endl;
			}
		}
	}
    return 0;
}