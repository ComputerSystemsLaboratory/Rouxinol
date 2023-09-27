#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
void Xtox(char *c) {
	int n = 0;
	while(c[n] != '\0') ++n;
	rep(i,n) {
		if(c[i] - 'a' < 0 || c[i] - 'a' >= 26) {
			if(c[i] - 'A' >= 0 && c[i] - 'A' < 26) {
				c[i] = (char) ('a' + (c[i] - 'A'));
			}
		}
	}
}
int main() {
	char s[20], p[1010];
	int ret = 0;
	scanf("%s", s);
	Xtox(s);
	while(1) {
		scanf("%s", p);
		if(!strcmp(p, "END_OF_TEXT")) break;
		Xtox(p);
		if(!strcmp(s, p)) ret++;
	}
	cout << ret << endl;
	return 0;
}