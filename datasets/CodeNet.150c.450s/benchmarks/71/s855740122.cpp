#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, d, t;
	while( cin >> n){
		t = 0;
		for(a = 0; a < 10; ++a){
			if( a > n ) break;
			for(b = 0; b < 10; ++b){
				if (a + b > n) break;
				for(c = 0; c < 10; ++c){
					if (a + b + c > n) break;
					d = n - ( a + b + c );
					if( 0 <= d && d <= 9)
						++t;
				}
			}
		}
		cout << t << "\n";
	}
	return 0;
}