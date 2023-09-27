#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int c[26];

int main() {
	while(1) {
		char s[1210];
		if(scanf("%s", s) == EOF) break;
		for(int i = 0; s[i] != '\0'; ++i) {
			rep(j,26) {
				if(s[i] - 'a' == j) {
					c[j]++;
					break;
				} else if(s[i] - 'A' == j) {
					c[j]++;
					break;
				}
			}
		}
	}
	rep(i,26) {
		cout << (char)('a' + i) << " : " << c[i] << endl; 
	}
	return 0;
}