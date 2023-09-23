#include<iostream>
using namespace std;
int main(void) {
	int i=1, j, max, a[3],kaisu;
	cin >> kaisu;
	while (1) {
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] >= a[1] && a[0] >= a[2]) {
			if (a[0] * a[0] == a[1] * a[1] + a[2] * a[2])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if (a[1] >= a[0] && a[1] >= a[2]) {
			if (a[1] * a[1] == a[2] * a[2] + a[0] * a[0])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
		{
			if (a[2] * a[2] == a[1] * a[1] + a[0] * a[0])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		}

		if (i == kaisu)break;
		i++;
	}
	return 0;
}