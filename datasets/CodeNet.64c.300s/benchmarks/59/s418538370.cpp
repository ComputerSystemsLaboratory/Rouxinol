#include <iostream>
using namespace std;
int main()
{
	int n, m = 0, i, j, k, a[10000] = {}, c = 0, p[10000] = {};
	bool b;
	
	cin >> n;
	for(i = 0; i < n; ++i){
		cin >> a[i];
		if( m < a[i] ) 
			m = a[i];
	}
	++m;
	m = min(m, 10000);
	
	for(i = 2; i < m; ++i){
		if( p[i] == 0 ){
			p[i] = 1;
			k = m/i;
			for(j = 2; j <= k; ++j)
				p[i * j] = 2;
		}
	}

	for(i = 0; i < n; ++i){
		if( a[i] <= 10000 ){
			if( p[a[i]] == 1 )
				++c;
		} else {
			b = true;
			for(j = 2; j < 10000; ++j){
				if( p[j] == 1 && a[i] % j == 0 ){
					b = false;
					break;
				}
			}
			if( b )
				++c;
		}
	}

	cout << c << "\n";

	return 0;
}