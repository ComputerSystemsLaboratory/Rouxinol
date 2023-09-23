#include <iostream>
using namespace std;

int main(){
	int r, c;
	while ( cin >> r >> c , r || c ){
		int s[10001] = {0};
		for(int y=0 ; y < r ; y++ ){
			for(int x=0 ; x < c ; x++ ){
				int e;
				cin >> e;
				if( e ) s[x] |= (1 << y);
			}
		}
		int ans = 0;
		for(int bits=0 ; bits < (1<<r) ; bits++ ){
			int a = 0;
			for(int x=0 ; x < c ; x++ ){
				int n=0, m = s[x] ^ bits;
				while( m != 0 ){
					n++;
					m &= m-1;
				}
				a += max( n , r-n );
			}
			ans = max( ans , a );
		}
		cout << ans << endl;
	}
}