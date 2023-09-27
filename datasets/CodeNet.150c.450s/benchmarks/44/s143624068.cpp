#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;

int main() {
	int a1, a2, a3, a4, b1, b2, b3, b4;
	while (cin >> a1) {
		cin >> a2 >> a3 >> a4;
		cin >> b1 >> b2 >> b3 >> b4;
		
		vector<int> a(4), b(4);
		a.at(0) = a1;
		a.at(1) = a2;
		a.at(2) = a3;
		a.at(3) = a4;
		b.at(0) = b1;
		b.at(1) = b2;
		b.at(2) = b3;
		b.at(3) = b4;
		
		int hit = 0, blow = 0;
		for (int i = 0; i < 4; i++) {
			int n = b.at(i);
			int cnt = count(a.begin(), a.end(), n);

			if (cnt == 1) {
				if (a.at(i) == n) {
					hit++;
				}
				else {
					blow++;
				}
			}
		}

		cout << hit << ' ' << blow << endl;
	}
}
