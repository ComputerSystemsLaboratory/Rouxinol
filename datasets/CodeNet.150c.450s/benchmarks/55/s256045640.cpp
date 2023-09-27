#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
char s[1010];

int main() {
	while(1) { 
		scanf("%s", s);
		if(s[0] == '0' && s[1] == '\0') break;
		int sum = 0;
		for(int i = 0; s[i] != '\0'; ++i) {
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}