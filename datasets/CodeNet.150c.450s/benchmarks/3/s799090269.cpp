#include<iostream>
#include<string>
#include<algorithm>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main() {
	string str, cmd, p, tmp;
	int q, i, j, a, b;
	cin >> str >> q;
	rep(i,q) {
		cin >> cmd;
		if (cmd == "print") {
			cin >> a >> b;
			cout << str.substr(a,b-a+1) << endl;
		} else if (cmd == "reverse") {
			cin >> a >> b;
			tmp = str.substr(a,b-a+1);
			reverse(tmp.begin(),tmp.end());
			rep(j,b-a+1) str[a+j] = tmp[j];
		} else if (cmd == "replace") {
			cin >> a >> b >> p;
			rep(j,p.length()) str[a+j] = p[j];
		} else cout << "Input Error";
	}
	return 0;
}