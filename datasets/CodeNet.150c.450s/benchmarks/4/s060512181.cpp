#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void answer()
{
	int m, f, r;
	while (1) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) break;
		if (m == -1 || f == -1) cout << 'F' << endl;
		else if (m + f >= 80) cout << 'A' << endl;
		else if (m + f >= 65) cout << 'B' << endl;
		else if (m + f >= 50) cout << 'C' << endl;
		else if (m + f >= 30) {
			if (r >= 50) cout << 'C' << endl;
			else cout << 'D' << endl;
		}
		else cout << 'F' << endl;
	}
}

int main()
{
	answer();
	return 0;
}