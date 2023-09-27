#include <bits/stdc++.h>
using namespace std;

template<typename T>
class UF
{
public:
	UF() {
		count = 0;
	}

	void push( T a ) {
		M[a] = count;
		V.push_back( count );
		rank.push_back( 0 );
		count++;
	}

	void unite( T a, T b ) {
		long long int x = find( M[a] );
		long long int y = find( M[b] );
		if( x == y )return;
		if( rank[x] < rank[y] ) {
			V[x] = y;
		} else {
			V[y] = x;
			if( rank[x] == rank[y] )rank[x]++;
		}
	}
	void merge( T a, T b ) {
		unite( a, b );
	}
	bool same( T a, T b ) {
		return find( M[a] ) == find( M[b] );
	}
	long long int group() {
		set<long long int>S;
		for( long long int i = 0; i < V.size(); i++ ) {
			S.insert( find( V[i] ) );
		}
		return S.size();
	}

private:
	vector<long long int> V, rank;
	map < T, long long int>M;
	long long int count;

	long long int find( long long int x ) {
		if( V[x] == x )return x;
		else return V[x] = find( V[x] );
	}
};

int main() {
	long long int n, q;
	cin >> n >> q;
	UF<long long int> uf;
	for( long long int i = 0; i < n; i++ ) {
		uf.push( i );
	}
	for( size_t i = 0; i < q; i++ ) {
		long long int c, x, y;
		cin >> c >> x >> y;
		if( c == 0 ) {
			uf.unite( x, y );
		} else {
			cout << uf.same( x, y ) << endl;
		}
	}
}