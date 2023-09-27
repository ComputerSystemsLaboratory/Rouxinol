#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class Dice
{
	const static int NUM_S = 6;
	int a[NUM_S];

public:
	Dice(void) {}

	void set(int _a[]) {
		a[0] = _a[0]; a[1] = _a[1];
		a[2] = _a[2]; a[3] = _a[3];
		a[4] = _a[4]; a[5] = _a[5];
	}

	int rs(void) {
		int tmp = a[1];
		a[1] = a[0]; a[0] = a[4];
		a[4] = a[5]; a[5] = tmp;
		return a[0];
	}

	int re(void) {
		int tmp = a[0];
		a[0] = a[3]; a[3] = a[5];
		a[5] = a[2]; a[2] = tmp;
		return a[0];
	}

	int rn(void) {
		int tmp = a[1];
		a[1] = a[5]; a[5] = a[4];
		a[4] = a[0]; a[0] = tmp;
		return a[0];
	}

	int rw(void) {
		int tmp = a[0];
		a[0] = a[2]; a[2] = a[5];
		a[5] = a[3]; a[3] = tmp;
		return a[0];
	}

};

int main()
{
	Dice dc;
	int st[6];
	cin >> st[0] >> st[1] >> st[2] >> st[3] >> st[4] >> st[5];

	dc.set(st);

	string od;
	cin >> od;
	int ans = st[0];
	for (unsigned int i = 0; i < od.length(); ++i) {
		switch (od[i]) {
			case 'N':
				ans = dc.rn();
				break;
			case 'S':
				ans = dc.rs();
				break;
			case 'E':
				ans = dc.re();
				break;
			case 'W':
				ans = dc.rw();
				break;
		}
	}

	cout << ans << endl;
	return 0;
}

