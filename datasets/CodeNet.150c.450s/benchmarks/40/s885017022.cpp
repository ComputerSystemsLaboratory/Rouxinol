#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define INF 1000000001
#define MOD 1000000007

using namespace std;



class Dice {
	int num[6] = { 0,0,0,0,0,0 };
public:
	void setnum(int*);
	void roll(char);
	void ans();
};

void Dice::roll(char c) {
	switch(c) {
		int tmp;
	case'N':
		tmp = num[0];
		num[0] = num[1];
		num[1] = num[5];
		num[5] = num[4];
		num[4] = tmp;
		break;
	case'S':
		tmp = num[0];
		num[0] = num[4];
		num[4] = num[5];
		num[5] = num[1];
		num[1] = tmp;
		break;
	case'E':
		tmp = num[0];
		num[0] = num[3];
		num[3] = num[5];
		num[5] = num[2];
		num[2] = tmp;
		break;
	case'W':
		tmp = num[0];
		num[0] = num[2];
		num[2] = num[5];
		num[5] = num[3];
		num[3] = tmp;
		break;
	default:
		cout << "invalid char" << endl;
	}
}

void Dice::setnum(int* a) {
	REP(i, 6) {
		num[i] = a[i];
	}
}

void Dice::ans() {
	cout << num[0] << endl;
}

int main() {
	int a[6];
	REP(i, 6) {
		int b;
		cin >> b;
		a[i] = b;
	}
	Dice d;
	d.setnum(a);
	string s;
	cin >> s;
	REP(i, s.length()) {
		d.roll(s[i]);
	}
	d.ans();
	return 0;
}