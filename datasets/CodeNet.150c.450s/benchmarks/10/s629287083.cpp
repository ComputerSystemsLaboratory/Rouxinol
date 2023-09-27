#include <iostream>
using namespace std;

int main() {
	const int H = 4,S = 3,F = 10;
	int hall[H][S][F] = {0};
	int n;
	cin >> n;
	while (n--) {
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		hall[b-1][f-1][r-1] += v;
	}
	for (int h = 0;h != H;++h) {
		for (int s = 0;s != S;++s) {
			for (int f = 0;f != F;++f) {
				cout << " " << hall[h][s][f];
			}
			cout << endl;
		}
		if (h != H - 1) {
			for (int sh = 0;sh != 20;++sh) {
				cout << "#";
			}
			cout << endl;
		}
	}
}