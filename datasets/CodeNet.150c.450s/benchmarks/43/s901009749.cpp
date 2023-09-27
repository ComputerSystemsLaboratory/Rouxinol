#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	ios::sync_with_stdio(false);
	
	int n;
	int sa, sb, a, b;
	while(1) {
		cin >> n;
		if(!n)break;
		sa = 0;
		sb = 0;
		rep(i, n) {
			cin >> a >> b;
			if(a>b) sa += a+b;
			else if(b>a) sb += a+b;
			else {
				sa += a;
				sb += b;
			}
		}
		cout << sa << " " << sb << endl;
	}	
	return 0;
}