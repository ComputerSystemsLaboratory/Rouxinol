#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main() {
	int a, b, c;
	while (cin >> a >> b, a | b) {
		cin >> c;
		vector<vector<int>>s(a);
		for (int k = 0; k < a; k++) {
			vector<int>p(b);
			s[k] = p;
		}
		map<vector<int>, bool>d;
		for (int e = 0; e < c; e++) {
			vector<int>f(2);
			int z, q;
			cin >> z >> q;
			z--; q--;
			f[0] = z;
			f[1] = q;
			d[f];
			d[f] = true;
		}
		for (int g = 0; g < a; g++) {
			for (int h = 0; h < b; h++) {
				vector<int>i(2);
				i[0] = g; i[1] = h;
				d[i];
				if (d[i]) { s[g][h] = 0; }
				else {
					if (g&&h)s[g][h] = s[g - 1][h] + s[g][h - 1];
					else if (g)s[g][h] = s[g - 1][h];
					else if (h)s[g][h] = s[g][h - 1];
					else s[g][h] = 1;
				}
			}
		}
		cout << s[a - 1][b - 1] << endl;
	}
}