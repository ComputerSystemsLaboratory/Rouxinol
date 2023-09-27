#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {	
	while(1) {
		char s[210];
		int n, a;
		scanf("%s", s);
		if(s[0] == '-' && s[1] == '\0') break;
		cin >> n;
		string s1 = s;
		rep(i,n) {
			cin >> a;
			string s2 = s1.substr(0, a);
			string s3 = s1.substr(a);
			s1 = s3 + s2;
		}
		cout << s1 << endl;
	}
	return 0;
}