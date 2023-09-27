#include <iostream>
using namespace std;

class Dice {
public:
	int u, f, r, l, b, d;

	Dice(int uu, int ff, int rr, int ll, int bb, int dd) {
		u = uu;
		f = ff;
		r = rr;
		l = ll;
		b = bb;
		d = dd;
	}

	void move(char dir) {
		int tmp;

		if (dir == 'N') {
			tmp = u;
			u = f;
			f = d;
			d = b;
			b = tmp;
		}
		else if (dir == 'W') {
			tmp = u;
			u = r;
			r = d;
			d = l;
			l = tmp;
		}
		else if (dir == 'R') {
			tmp = r;
			r = f;
			f = l;
			l = b;
			b = tmp;
		}
	}
};

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	Dice dice(a, b, c, d, e, f);
	int q;
	cin >> q;

	for (int i = 0;i < q;i++) {
		cin >> a >> b;
		for (int j = 0;j < 6;j++) {
			if (dice.u == a) {
				for (int k = 0;k < 4;k++) {
					if (dice.u == a && dice.f == b) {
						cout << dice.r << endl;
					}
					dice.move('R');
				}
			}
			if (j % 2 == 0) {
				dice.move('W');
			}
			else {
				dice.move('N');
			}
		}
	}
    return 0;
}

