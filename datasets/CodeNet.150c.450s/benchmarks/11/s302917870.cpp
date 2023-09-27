#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int n, a;
bool b[4][13];  
const char suit[4] = {'S', 'H', 'C', 'D'};
int main() {
	cin >> n;
	rep(i,n) {
		char s[3];
		cin >> s >> a;
		char c = s[0];
		rep(j,4) {
			if(c == suit[j]) {
				b[j][a - 1] = true;
			}
		}
	}
	rep(i,4) {
		rep(j,13) {
			if(!b[i][j]) {
				cout << suit[i] << ' ' << j + 1 << endl;
			}
		}
	}
	return 0;
}