#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int x, y, s;
	while(cin>>x>>y>>s, x|y|s){
		int ans = 0;
		for(int i=1; i<s; i++){
			int p, q;
			for( p = (i * 100) / (100+x) -1; p*(100+x)<(i+1)*100; p++);
			p--;
			for( q = ((s-i) * 100) / (100+x) -1; q*(100+x)<(s-i+1)*100; q++);
			q--;
			if( p*(100+x)/100 + q*(100+x)/100 != s ) continue;
			int _p = p * (100+y) / 100;
			int _q = q * (100+y) / 100;
			ans = max(ans, _p+_q);
//			cout << p << " " << q << " " << _p+_q <<  endl;
		}
		cout << ans << endl;
	}
	return 0;
}