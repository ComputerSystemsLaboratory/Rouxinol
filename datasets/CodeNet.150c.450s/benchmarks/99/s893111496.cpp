#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

using namespace std;

int ch(char a) {
	if (a == 'm') return 1000;
	if (a == ('c')) return 100;
	if (a == 'x')return 10;
	if (a == 'i') return 1;

}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	REP(i, n) {
		string s1, s2;
		cin >> s1 >> s2;
		int x1=0, x2=0;
		int j = 0;
		while (j < s1.size()) {
			if (isdigit(s1[j])) {
				x1 += (s1[j]-'0')*ch(s1[j + 1]);
				j += 2;
			}
			else {
				x1 += ch(s1[j]);
				++j;
			}
		}
		j = 0;
		while (j < s2.size()) {
			if (isdigit(s2[j])) {
				x2 += (s2[j]-'0') * ch(s2[j + 1]);
				j += 2;
			}
			else {
				x2 += ch(s2[j]);
				++j;
			}
		}
		int x = x1 + x2;
		j = 1000;
		string s="";
		REP(i, 4) {
			char c;
			if (i == 0) c = 'm';
			else if (i == 1)c = 'c';
			else if (i == 2)  c = 'x';
			else if (i == 3) c = 'i';
			if (x / j == 1) {
				s += c;
				x -= x / j*j;
			}
			else if (x / j != 0) {
				s += to_string(x / j) + c;
				x -= x / j*j;
			}
			
			j /= 10;
		}
		cout << s << endl;
		
	}
	return 0;
}