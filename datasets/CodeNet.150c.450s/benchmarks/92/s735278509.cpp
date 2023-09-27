#include <iostream>
using namespace std;

int main(){
	int a, b, ans;
	while ( cin >> a >> b ) {
		a += b;
		ans = 0;
		while( a > 0 , ans++ , a /= 10 );
		cout << ans << endl;
	}
}