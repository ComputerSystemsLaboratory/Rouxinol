#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int s = 0;
int x[] = { -1,0,0,1 }; int y[] = { 0,-1,1,0 };
bool p[20][20]{};
void shima(int a, int b) {
	s++;
	p[a][b] = false;
	for (int c = 0; c < 4; c++) {
		int d = a + x[c]; int e = b + y[c];
		if (d >= 0 && d < 20 && e>=0 && e < 20 && p[d][e])shima(d, e);
	}
}
int main() {
	int a, b;
	while (cin >>b>>a, a | b) {
		s = 0;
		for (int n = 0; n < 20; n++) {
			for (int m = 0; m < 20; m++) {
				p[n][m] = false;
			}
		}
		int l = 0, r = 0;
		for (int c = 0; c < a; c++) {
			for (int d = 0; d<b; d++) {
				char e;
				cin >> e;
				if (e == '.')p[c][d] = true;
				else if (e == '@') { l = c; r = d; }
			}
		}
		shima(l, r);
		cout << s << endl;
	}
}