#include<iostream>
#include<cstdio>
#include<list>
#include<vector>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int b = 0; b < a; b++) {
		int c, d, e;
		cin >> c >> d >> e;
		int s = e;
		for (int f = 1; f < c; f++) {
			if (f % 3 == 0) {
				s += 200;
			}
			else {
				s += 195;
			}
		}
		if (c % 3 == 0) {
			s += (d - 1) * 20;
		}
		else {
			for (int x = 1; x < d; x++) {
				if (x & 1)s += 20;
				else s += 19;
			}
		}
		cout << 196471-s << endl;
	}
}