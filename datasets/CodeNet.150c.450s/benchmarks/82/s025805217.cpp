#include <iostream>
using namespace std;

int main()
{
	int q, u1, f1, u2, f2, d[6];
	for (int i = 0; i < 6; i++)
		cin >> d[i];
	cin >> q;
	int *r = new int[q];
	for (int i = 0; i < q; i++) {
		cin >> u1 >> f1;
		for (int j = 0; j < 6; j++) {
			if (d[j] == u1)
			u2 = j;
		}
		for (int j = 0; j < 6; j++) {
			if (d[j] == f1)
			f2 = j;
		}
		if (u2 == 0) {
			if (f2 == 1)
				r[i] = d[2];
			else if (f2 == 2)
				r[i] = d[4];
			else if (f2 == 4)
				r[i] = d[3];
			else
				r[i] = d[1];
		}
		if (u2 == 1) {
			if (f2 == 0)
				r[i] = d[3];
			else if (f2 == 3)
				r[i] = d[5];
			else if (f2 == 5)
				r[i] = d[2];
			else
				r[i] = d[0];
		}
		if (u2 == 2) {
			if (f2 == 0)
				r[i] = d[1];
			else if (f2 == 1)
				r[i] = d[5];
			else if (f2 == 5)
				r[i] = d[4];
			else
				r[i] = d[0];
		}
		if (u2 == 3) {
			if (f2 == 0)
				r[i] = d[4];
			else if (f2 == 4)
				r[i] = d[5];
			else if (f2 == 5)
				r[i] = d[1];
			else
				r[i] = d[0];
		}
		if (u2 == 4) {
			if (f2 == 0)
				r[i] = d[2];
			else if (f2 == 2)
				r[i] = d[5];
			else if (f2 == 5)
				r[i] = d[3];
			else
				r[i] = d[0];
		}
		if (u2 == 5) {
			if (f2 == 1)
				r[i] = d[3];
			else if (f2 == 3)
				r[i] = d[4];
			else if (f2 == 4)
				r[i] = d[2];
			else
				r[i] = d[1];
		}
	}
	for (int i = 0; i < q; i++)
		cout << r[i] << endl;
	delete [] r;
	return 0;
}