#include <iostream>
#include <string>
#include <cstring>
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
		else if (dir == 'E') {
			tmp = u;
			u = l;
			l = d;
			d = r;
			r = tmp;
		}
		else if (dir == 'S') {
			tmp = u;
			u = b;
			b = d;
			d = f;
			f = tmp;
		}
		else if (dir == 'W') {
			tmp = u;
			u = r;
			r = d;
			d = l;
			l = tmp;
		}
	}
};


int main()
{
	int a, b, c, d, e, f;
	string order;
	cin >> a >> b >> c >> d >> e >> f >> order;

	Dice dice(a, b, c, d, e, f);

	for (int i = 0;i < order.size();i++) {
		dice.move(order[i]);
	}

	cout << dice.u << endl;

    return 0;
}

