#include <iostream>
#include <string.h>
using namespace std;

struct edge {
	int s, t, d;
};

int v, e, r, ct = 0;
bool nc = 0;
edge es[2000];
long d[1000];
const long Mx = 0xFFFFFFF;

int main()
{
	cin >> v >> e >> r;

	for (int i = 0; i < e; i++)
		cin >> es[i].s >> es[i].t >> es[i].d;

		for (int i = 0; i < v; i++)
			d[i] = Mx;

		d[r] = 0;

	while (true) {
		bool f = true;
		for (int i = 0; i < v; i++) {
			for (int j = 0; j < e; j++) {
				edge e = es[j];
				if (d[e.s] != Mx && d[e.t] > d[e.s] + e.d) {
					d[e.t] = d[e.s] + e.d;
					f = false;
				}
			}
		}
		ct++;
		if (ct > v || f)
			break;
	}

	if (ct > v)
		cout << "NEGATIVE CYCLE" << endl;
	else {
		for (int i = 0; i < v; i++) {
			if (d[i] == Mx)
				cout << "INF" << endl;
			else
				cout << d[i] << endl;
		}
	}

	return 0;
}
