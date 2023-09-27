#include <bits/stdc++.h>

using namespace std;

int y, z , e;

int main()
{
	cin >> e;
	while (e != 0) {
		y = z = 0;
		int mi = 100000000;
		
		for (; z * z * z <= e; z++) {
			for (y = 0; z * z * z + y * y <= e; y++) {
				mi = min(mi, z + y + (e - z * z * z - y * y));
			}
		}
		cout << mi << endl;
		cin >> e;
	}
	return 0;
}

