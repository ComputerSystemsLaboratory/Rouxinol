#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, m, z[200], xx, yy;
	string x, y, out;
	while (cin >> n) {
		if (n == 0) { break; }
		for (int i = 0; i < 200; i++) {
			z[i] = i;
		}
		out = "";
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			xx = x[0];
			yy = y[0];
			z[xx] = yy;
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> x;
			n = x[0];
			out += z[n];
		}
		cout << out << endl;
	}
	return 0;
}