#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	string s0;
	int n, a, b;
	string str[3] = {"replace", "reverse", "print"};
	cin >> s0 >> n;
	rep(i,n) {
		string s1;
		cin >> s1 >> a >> b;	
		if(s1 == str[0]) {
			string q;
			cin >> q;
			s0.replace(a, b - a + 1, q);
		} else if(s1 == str[1]) {
			string s2 = s0.substr(0, a);
			string s3 = s0.substr(a, b - a + 1);
			string s4 = s0.substr(b + 1);
			string s5;
			for(int j = 0; j < b - a + 1; ++j) {
				s5 += s3[b - a - j];
			}
			s0 = s2 + s5 + s4;
		} else if(s1 == str[2]){
			rep2(j, a, b + 1) {
				cout << s0[j];
			}
			cout << endl;
		}
	}
	return 0;
}