#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int m, f, r;
	while (cin >> m >> f >> r, m != -1 || f != -1 || r != -1) {
		if (m == -1 || f == -1) cout << 'F' << endl;
		else if ((m + f) >= 80) cout << 'A' << endl;
		else if ((m + f) >= 65) cout << 'B' << endl;
		else if ((m + f) >= 50) cout << 'C' << endl;
		else if ((m + f) >= 30 && r >= 50) cout << 'C' << endl;
		else if ((m + f) >= 30) cout << 'D' << endl;
		else cout << 'F' << endl;
	}
}