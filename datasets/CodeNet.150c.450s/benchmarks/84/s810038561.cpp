#include <bits/stdc++.h>
using namespace std;

class bitree {
	vector<int> m_tree;

public:
	bitree( int n ):
		m_tree( n+1 )
	{
		m_tree.at( 0 ) = n;
	}

	void add( int i, int x ) {
		while( i <= m_tree.at( 0 ) ) {
			m_tree.at( i ) += x;
			i += i & -i;
		}
	}

	int sum( int i ) const {
		int s = 0;

		while( i > 0 ) {
			s += m_tree.at( i );
			i -= i & -i;
		}

		return s;
	}
};

int main() {
	ios_base::sync_with_stdio( false );

	int n;
	cin >> n;

	vector<int> a( n );
	map<int, int> m;

	for( int i = 0; i < n; ++i ) {
		cin >> a.at( i );
		m[a.at( i )] = 0;
	}

	int x = 1;
	for( auto& p: m ) {
		p.second = x++;
	}

	for( int i = 0; i < n; ++i ) {
		a.at( i ) = m[a.at( i )];
	}

	bitree bit( n );
	int64_t result = 0;

	for( int i = 0; i < n; ++i ) {
		result += i - bit.sum( a.at( i ) );
		bit.add( a.at( i ), 1 );
	}

	cout << result << endl;
}

