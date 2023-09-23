#include <ios>
#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);

	int n, i, m, c = 0, a[100] = {};
	cin >> n;
	for(i = 0; i < n; ++i)
		cin >> a[i];
	
	for(i = 0; i < n; ++i){
		m = i;
		for(int j = i; j < n; ++j){
			if( a[j] < a[m] )
				m = j;
		}
		if( m != i ){
			swap( a[i], a[m] );
			++c;
		}
	}

	for(i = 0; i < n; ++i){
		cout << a[i];
		if( i != n - 1 )
			cout << " ";
	}
	cout << "\n" << c << "\n";

	return 0;
}