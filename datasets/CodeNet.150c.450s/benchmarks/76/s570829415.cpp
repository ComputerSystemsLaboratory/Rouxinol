#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> T;
vector<long> v;

void in(long k) {
	if (k == -1)
		return;
	else {
		in(T[k][0]);
		cout << " " << v[k];
		in(T[k][1]);
		return;
	}
}

void pre(long k) {
	if (k == -1)
		return;
	else {
		cout << " " << v[k];
		pre(T[k][0]);
		pre(T[k][1]);
		return;
	}
}

int main()
{
	string s;
	long n = 0, t = 0;

	cin >> n;

	T.assign(n, { -1, -1});
	v.assign(n, -2000000001);

	for (long i = 0; i < n; i++) {
		cin >> s;

		if (s == "insert") {
			cin >> v[t];

			long y = -1, x = 0;

			while (x != -1) {
				int m = 1;
				y = x;
				if (v[t] < v[x])
					m = 0;
				x = T[x][m];
			}

			int s = 1;

			if (i > 0 && y != -1) {
				if (v[t] < v[y])
					s = 0;
				T[y][s] = t;
			}
			t++;
		}
		else if (s == "print") {
			in(0);
			cout << endl;
			pre(0);
			cout << endl;
		}
		else if (s == "find") {
			long w = 0;
			cin >> w;
			
			long x = 0;

			while (x != -1) {
				int m = 1;
				if (w == v[x])
					break;
				else if (w < v[x])
					m = 0;
				x = T[x][m];
			}

			if(x != -1)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
	return 0;
}
