#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int building[4][3][10] = { 0 };
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int b, f, r, v; cin >> b >> f >> r >> v;
		int& room = building[b - 1][f - 1][r - 1];
		room += v;
		if (room < 0) room = 0;
		if (room > 9) room = 9;
	}
	for (int b = 0; b < 4; b++) {
		for (int f = 0; f < 3; f++) {
			for (int r = 0; r < 10; r++) {
				cout << " " << building[b][f][r];
			}
			cout << endl;
		}
		if (b != 3) cout << "####################" << endl;
	}
}