#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             


int main( void ) {
	int n; cin >> n;
	deque<int> a;

	int key, size = 0;
	string com;
	REP( i, n ) {
		cin >> com;
		if( com == "insert" ) {
			cin >> key;
			a.push_front( key );
			size++;
		} else if( com == "delete" ) {
			cin >> key;
			auto ite = find( ALL( a ), key );
			if( ite != a.end() ) {
				a.erase( ite );
				size--;
			}
		} else if( com == "deleteFirst" ) {
			a.pop_front();
			size--;
		} else {
			a.pop_back();
			size--;
		}
	}

	REP( i, size - 1 ) cout << a[i] << " ";
	cout << a[size - 1] << endl;
}
