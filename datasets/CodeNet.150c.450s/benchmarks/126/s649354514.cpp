#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a, b;
bool ng[16][16];

int search(int x, int y) {
	int res1, res2;
	if (x == a && y == b) return 1;
	if (x + 1 <= a && !ng[y][x + 1]) res1 = search(x + 1, y);
	else res1 = 0;
	if (y + 1 <= b && !ng[y + 1][x]) res2 = search(x, y + 1);
	else res2 = 0;
	return res1 + res2;
}

int main() {
	int n;

	while (cin >> a, a) {
		fill(ng[0], ng[16], false);
		cin >> b >> n;
		--a; --b;
		int xi, yi;
		while (n--) {
			cin >> xi >> yi;
			ng[yi - 1][xi - 1] = true;
		}
		cout << search(0, 0) << endl;
	}
	return 0;
}