#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long Long;

class SegTree {
public:
    int m_n;
    vector<Long> m_data;

    SegTree( int n ) { Init( n ); }

    void Init( int n ) {

	m_n = 1;
	while ( m_n < n ) m_n <<= 1;

	m_data.resize( 2*m_n - 1 );
    }

    void Add( int k, int val ) {

	k += m_n - 1;

	m_data[k] += (Long)val;
	
	while ( k > 0 ) {
	    k = ( k - 1 )/2;
	    m_data[k] = m_data[2*k+1] + m_data[2*k+2];
	}
    }

    Long Sum( int a, int b ) {
	return query( a, b + 1, 0, 0, m_n );
    }

protected:

    Long query( int a, int b, int k, int l, int r ) {

	if ( b <= l || a >= r ) return 0;

	if ( a <= l && r <= b ) return m_data[k];

	Long left = query( a, b, 2*k+1, l, (l+r)/2 );
	Long right = query( a, b, 2*k+2, (l+r)/2, r );

	return left + right;
    }
    
};


int main() {

    int n, q;

    cin >> n >> q;

    SegTree seg( n );

    int c, x, y;
    for ( int i=0; i<q; ++i ) {

	cin >> c >> x >> y;

	if ( c == 0 ) seg.Add( x-1, y );
	else cout << seg.Sum( x-1, y-1 ) << endl;
	
    }
    
    return 0;
}

