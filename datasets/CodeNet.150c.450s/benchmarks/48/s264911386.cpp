#if 0
16:09-
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2012

#endif

#include <iostream>
#include <stdint.h>
using namespace std;

#define REP(var, start, count) for(int var=start; var<count; var++)

int main(void) {
	while(true) {
		int e;
		cin >> e;
		
		int ans = 10000000;
		
		if ( e == 0 ) { break; }
		
		REP(z, 0, 101) {
			int z3 = z*z*z;
			if ( z3 > e ) { break; }
			
			REP(y, 0, 1001) {
				if ( y*y > e-z3 ) { break; }
				
				int x = (e-z3-y*y);
				int res = x+y+z;
				if ( res < ans ) { ans = res; }
			}
		}
		
		cout << ans << endl;
	}

}