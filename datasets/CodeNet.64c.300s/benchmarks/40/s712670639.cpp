#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
char s[1210][1210];
int main() {
	int r = 0;
	while(1) {
		if(scanf("%s", s[r]) == EOF) break;
		++r;
	}

	rep(i,r) {
		for(int j = 0; s[i][j] != '\0'; ++j) {
			int c = s[i][j] - 'a';
			int d = s[i][j] - 'A';
			if(c >= 0 && c < 26) {
				cout << (char) ('A' + c);
			} else if(d >= 0 && d < 26) {
				cout << (char) ('a' + d);
			} else cout << s[i][j];
		}
		if(i != r - 1) cout << " ";
	}
	cout << endl;
 	return 0;
}