#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n;
	int ts = 0, hs = 0;
	char t[110], h[110];
	cin >> n;
	rep(i,n) {
		cin >> t >> h;
		if(strcmp(t, h) > 0) ts += 3;
		else if(strcmp(t, h) < 0) hs += 3;
		else ts += 1, hs += 1;
	}
	cout << ts << " " << hs << endl;
	return 0;
}