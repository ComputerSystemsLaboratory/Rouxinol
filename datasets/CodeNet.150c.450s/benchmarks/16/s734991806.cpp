#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main( void ) {
	stack<int> S1;
	stack<pair<int, int>> S2;
	char ch;
	int sum = 0;
	for( int i = 0; cin >> ch; i++ ) {
		if( ch == '\\' ) S1.push( i );
		else if( ch == '/' && S1.size() > 0 ){
			int j = S1.top(); S1.pop();
			sum += i - j;
			int a = i - j;
			while( S2.size() > 0 && S2.top().first > j ) {
				a += S2.top().second; S2.pop();
			}
			S2.push( make_pair( j, a ) );
		}
	}

	vector<int> ans;
	while( S2.size() > 0 ) { ans.push_back( S2.top().second ); S2.pop(); }
	reverse( ALL( ans ) );
	cout << sum << endl;
	cout << ans.size();
	REP( i, ans.size() ) {
		cout << " ";
		cout << ans[i];
	}
	cout << endl;

}
