#include <iostream>
using namespace std;

int main(){
	int n, y, m, d;
	cin >> n;
	for(int i=0 ; i < n ; i++ ){
		cin >> y >> m >> d;
		int ans = 0;
		while( !(y == 1000 && m == 1 && d == 1) ){
			ans++;
			int m_day = ( y % 3 == 0 || m % 2 == 1 )? 20 : 19;
			if( d == m_day ){
				d = 1;
				if( m == 10 ){
					m = 1;
					y++;
				}else{
					m++;
				}
			}else{
				d++;
			}
		}
		cout << ans << endl;
	}
}