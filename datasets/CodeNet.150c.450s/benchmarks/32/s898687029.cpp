#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int m, nmin, nmax;
	while (cin >> m >> nmin >> nmax&&m&&nmin&&nmax) {
		int p[200];
		for (int i = 0; i < m; i++)cin >> p[i];
		int soeji, sa1=p[nmin-1]-p[nmin],sa2;
		for (int i = nmin - 1; i <= nmax - 1; i++) {
			if (sa1 <= p[i] - p[i + 1]) {
				sa1 = p[i] - p[i + 1];
				soeji = i+1;
			}
		}
		cout << soeji << endl;
	}
	return 0;
}