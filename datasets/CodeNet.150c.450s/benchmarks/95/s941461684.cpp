#ifndef _WIN32
#include<iostream>
#endif // !_WIN32

#include<string>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()



int main() {
	int n;
	while (cin >> n, n) {
		int prv = 0;
		int l = 0;
		int r = 0;
		int res=0;
		REP(i, n) {
			string s;
			cin >> s;
			if (s == "lu")l = 1;
			if (s == "ru")r = 1;
			if (s == "ld")l = 0;
			if (s == "rd")r = 0;
			if (l == r&&r != prv) {
				prv = r;
				res++;
			}
		}
		cout << res << endl;
	}

	return 0;
}