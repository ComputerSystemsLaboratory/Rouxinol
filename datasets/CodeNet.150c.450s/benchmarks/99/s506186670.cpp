#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>

using namespace std;

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}

typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;

int toNum(string str) {
	int num = 0;
	int a = 1;

	REP(i, str.size()) {
		switch(str[i]) {
		case 'm':
			num += a*1000;
			a = 1;
			break;
		case 'c':
			num += a*100;
			a = 1;
			break;
		case 'x':
			num += a*10;
			a = 1;
			break;
		case 'i':
			num += a;
			a = 1;
			break;
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			a = str[i]-'0';
			break;			
		}
	}

	return num;
}

string toMcxi(int num) {
	string str;
	int m, c, x, i;

	m = num/1000;
	num -= m*1000;
	c = num/100;
	num -= c*100;
	x = num/10;
	num -= x*10;
	i = num;

	if(m) {
		if(m != 1) {
			str += toString<int>(m);
		}
		str += 'm';
	}
	if(c) {
		if(c != 1) {
			str += toString<int>(c);
		}
		str += 'c';
	}
	if(x) {
		if(x != 1) {
			str += toString<int>(x);
		}
		str += 'x';
	}
	if(i) {
		if(i != 1) {
			str += toString<int>(i);
		}
		str += 'i';
	}
	return str;
}

int main() {
	int n;
	cin >> n;

	REP(i, n) {
		string str1, str2;
		cin >> str1 >> str2;

		cout << toMcxi(toNum(str1) + toNum(str2)) << endl;
	}

}