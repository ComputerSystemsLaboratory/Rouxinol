#include <iostream>
#include <algorithm>
using namespace std;

int v, e, s, t, u;
bool nc = 0;
long long d[100][100];
const long long Mx = 0xFFFFFFFF;

int main()
{
	cin >> v >> e;

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			if (i == j)
				d[i][j] = 0;
			else
				d[i][j] = Mx;
		}
	}

	for (int i = 0; i < e; i++) {
		cin >> s >> t >> u;
		d[s][t] = u;
	}

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			for (int k = 0; k < v; k++) {
				if(d[j][i] != Mx && d[i][k] != Mx)
					d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
			}
		}
	}

	for (int i = 0; i < v; i++) {
		if (d[i][i] < 0) {
			nc = 1;
			break;
		}
	}

	if (nc)
		cout << "NEGATIVE CYCLE" << endl;
	else {
		for (int i = 0; i < v; i++) {
			for (int j = 0; j < v - 1; j++) {
				if (d[i][j] == Mx)
					cout << "INF" << " ";
				else
					cout << d[i][j] << " ";
			}
			if (d[i][v - 1] == Mx)
				cout << "INF" << endl;
			else
				cout << d[i][v - 1] << endl;
		}
	}

	return 0;
}
