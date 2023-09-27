#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	ios::sync_with_stdio(false);
	
	int a, b, s, t;
	s = 0;
	t = 0;
	rep(i, 4) {
		cin >> a;
		s += a;
	}
	rep(i, 4) {
		cin >> b;
		t += b;
	}
	
	cout << (t>s?t:s) << endl;
	
	return 0;
}