#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

struct Dice {
	int d[6], E, S, U;
	Dice(int a[]) {
		rep(i, 6)d[i] = a[i];
		E = 2; S = 1; U = 0;
	}
	void rotate(char C) {
		int a = E, b = S, c = U;
		switch (C) {
		case'E':
			E = U; U = 5 - a;
			break;
		case'N':
			U = S; S = 5 - c;
			break;
		case'S':
			S = U; U = 5 - b;
			break;
		case'W':
			U = E; E = 5 - c;
			break;
		}
	}
};
int main() {
	int a[6]; rep(i, 6)cin >> a[i];
	string s; cin >> s;
	Dice d(a);
	for (char c : s)d.rotate(c);
	cout << d.d[d.U] << endl;
}