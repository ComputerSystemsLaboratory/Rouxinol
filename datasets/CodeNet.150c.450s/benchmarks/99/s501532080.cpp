/*
* Problem link
* 
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> V;
typedef vector<V> VV;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
template<typename T>
inline bool chmax(T &a, T b) {
	bool res = a < b;
	if (res)a = b;
	return res;
}
typedef pair<int, int> P;
typedef vector<P> VP;
#define fi first
#define se second
#define ALL(v) (v).begin(),(v).end()
string f[4][10] = {
	{"","i","2i","3i","4i","5i" ,"6i","7i" ,"8i","9i" },
	{ "","x","2x","3x","4x","5x" ,"6x","7x" ,"8x","9x" },
	{ "","c","2c","3c","4c","5c" ,"6c","7c" ,"8c","9c" },
	{ "","m","2m","3m","4m","5m" ,"6m","7m" ,"8m","9m" },
};
void calc(string s, char c, int d, int &a) {
	int id = s.find(c);
	if (id == string::npos);
	else {
		if (id == 0 || !isdigit(s[id - 1]))a += d;
		else a += (s[id - 1] - '0') * d;
	}
}
int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	int T;
	cin >> T;
	while (T--) {
		string s, t;
		cin >> s >> t;
		int a = 0, b = 0;
		calc(s, 'm', 1000, a);
		calc(s, 'c', 100, a);		
		calc(s, 'x', 10, a);		
		calc(s, 'i', 1, a);
		calc(t, 'm', 1000, b);
		calc(t, 'c', 100, b);
		calc(t, 'x', 10, b);
		calc(t, 'i', 1, b);
		int c = a + b;
		string res;
		REP(i,4) {
			res = f[i][c % 10] + res;
			c /= 10;
		}
		cout << res << endl;
	}
	return 0;
}