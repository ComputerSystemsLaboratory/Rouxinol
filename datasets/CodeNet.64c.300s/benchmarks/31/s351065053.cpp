#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	ios::sync_with_stdio(false);
	bool s[30] = {};
	int a;
	rep(i, 28) {
		cin >> a;
		s[a-1] = true;
	}
	rep(i, 30) {
		if(!s[i])cout << (i+1) << endl;
	}
	return 0;
}