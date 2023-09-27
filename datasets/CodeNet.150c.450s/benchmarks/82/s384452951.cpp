#include <map>
#include <iostream>

using namespace std;

class Dice
{

	const static int NUM_S = 6;
	int a[NUM_S];
	map<int, int> men;

public:
	Dice(void) {}

	void set(int _a[]) {
		a[0] = _a[0];
		a[1] = _a[1];
		a[2] = _a[2];
		a[3] = _a[3];
		a[4] = _a[4];
		a[5] = _a[5];
		men[_a[0]] = 0;
		men[_a[1]] = 1;
		men[_a[2]] = 2;
		men[_a[3]] = 3;
		men[_a[4]] = 4;
		men[_a[5]] = 5;
	}

	int que(int x1, int x2) {
		int x = men[x1];
		int y = men[x2];
		switch (x) {
			case 0:
			switch (y) {
				case 1:
					return a[2];
				case 2:
					return a[4];
				case 3:
					return a[1];
				case 4:
					return a[3];
			}
			case 1:
			switch (y) {
				case 0:
					return a[3];
				case 2:
					return a[0];
				case 3:
					return a[5];
				case 5:
					return a[2];
			}
			case 2:
			switch (y) {
				case 0:
					return a[1];
				case 1:
					return a[5];
				case 4:
					return a[0];
				case 5:
					return a[4];
			}
			case 3:
			switch (y) {
				case 0:
					return a[4];
				case 1:
					return a[0];
				case 4:
					return a[5];
				case 5:
					return a[1];
			}
			case 4:
			switch (y) {
				case 0:
					return a[2];
				case 2:
					return a[5];
				case 3:
					return a[0];
				case 5:
					return a[3];
			}
			case 5:
			switch (y) {
				case 1:
					return a[3];
				case 2:
					return a[1];
				case 3:
					return a[4];
				case 4:
					return a[2];
			}
		}
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

	unsigned int n;
	cin >> n;
	for (unsigned int i = 0; i < n; ++i) {
	    int x, y;
		cin >> x >> y;
		cout << dc.que(x, y) << endl;
	}

	return 0;
}

