#include<bits/stdc++.h>
using namespace std;

#define FOR(i,s,t) for(int i = s ; i < t ; i ++)
#define SZ(a) (int)a.size()
using LL = long long;

//BEGIN CUT HERE
struct Dice {
	int s[6];
	void roll(char c) {
		//the view from above
		// N
		//W E
		// S
		//s[0]:top
		//s[1]:south
		//s[2]:east
		//s[3]:west
		//s[4]:north
		//s[5]:bottom
		int b;
		if (c == 'E') {
			b = s[0];
			s[0] = s[3];
			s[3] = s[5];
			s[5] = s[2];
			s[2] = b;
		}
		if (c == 'W') {
			b = s[0];
			s[0] = s[2];
			s[2] = s[5];
			s[5] = s[3];
			s[3] = b;
		}
		if (c == 'N') {
			b = s[0];
			s[0] = s[1];
			s[1] = s[5];
			s[5] = s[4];
			s[4] = b;
		}
		if (c == 'S') {
			b = s[0];
			s[0] = s[4];
			s[4] = s[5];
			s[5] = s[1];
			s[1] = b;
		}

		// migi neji 
		if (c == 'R') {
			b = s[1];
			s[1] = s[2];
			s[2] = s[4];
			s[4] = s[3];
			s[3] = b;
		}

		if (c == 'L') {
			b = s[1];
			s[1] = s[3];
			s[3] = s[4];
			s[4] = s[2];
			s[2] = b;
		}

	}
	int top() {
		return s[0];
	}
	int hash() {
		int res = 0;
		for (int i = 0; i<6; i++) res = res * 256 + s[i];
		return res;
	}
};
vector<Dice> makeDices(Dice d) {
	vector<Dice> res;
	for (int i = 0; i<6; i++) {
		Dice t(d);
		if (i == 1) t.roll('N');
		if (i == 2) t.roll('S');
		if (i == 3) t.roll('S'), t.roll('S');
		if (i == 4) t.roll('L');
		if (i == 5) t.roll('R');
		for (int k = 0; k<4; k++) {
			res.push_back(t);
			t.roll('E');
		}
	}
	return res;
}
//END CUT HERE

void solve_AOJ_ITP1_11_A() {
	int N = 6;
	Dice D;
	FOR(i, 0, N) {
		int val; cin >> val;
		D.s[i] = val;
	}
	string s; cin >> s;
	FOR(i, 0, SZ(s)) {
		D.roll(s[i]);
	}
	cout << D.top() << endl;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	solve_AOJ_ITP1_11_A();

	return 0;
}


