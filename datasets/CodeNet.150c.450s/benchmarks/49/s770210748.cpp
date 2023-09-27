#include<iostream>
using namespace std;

int n,s;

int main(){
	int i;
	while( cin >> n ){
		if( !n )break;
		
		int ans = 0,mx = 0,mn = 10000;
		for( i = 0; i < n; i++ ){
			cin >> s;
			ans += s;
			mx = max( mx, s );
			mn = min( mn, s );
		}
		ans -= mx+mn;
		cout << ans/(n-2) << endl;
	}
	return 0;
}