#include <iostream>
#include <string>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)

int main(){
	string s;
	string p;
	bool f=0;
	cin >> s >> p;
	s.insert(s.length(), s, 0, p.length());
	REP(i, s.length() - p.length()){
		if (s.substr(i, p.length()) == p)
			f = 1;
	}
	if (f)cout << "Yes" << '\n';
	else cout << "No" << '\n';

	return 0;
}