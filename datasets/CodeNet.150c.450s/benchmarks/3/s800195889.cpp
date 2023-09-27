#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	char s[1010];
	int n, a, b;
	string str[3] = {"replace", "reverse", "print"};
	cin >> s >> n;
	string s0 = s;
	rep(i,n) {
		char p[110];
		cin >> p >> a >> b;	
		string s1 = p;
		if(!s1.compare(str[0])) {
			char q[1010];
			cin >> q;
			s0.replace(a, b - a + 1, q);
		} else if(!s1.compare(str[1])) {
			string s2 = s0.substr(0, a);
			string s3 = s0.substr(a, b - a + 1);
			string s4 = s0.substr(b + 1);
			string s5;
			for(int j = 0; j < b - a + 1; ++j) {
				s5 += s3.at(b - a - j);
			}
			s0 = s2 + s5 + s4;
		} else if(!s1.compare(str[2])){
			rep2(j, a, b + 1) {
				cout << s0.at(j);
			}
			cout << endl;
		}
	}
	return 0;
}