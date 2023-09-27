#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	ios::sync_with_stdio(false);
	
	int c[6] = {500, 100, 50, 10, 5, 1};
	while(1) {
		int a;
		cin >> a;
		if(!a)break;
		a = 1000-a;
		int s = 0;
		rep(i, 6) {
			int t = a/c[i];
			a -= t*c[i];
			s += t;
		}
		cout << s << endl;
	}
	
	return 0;
}