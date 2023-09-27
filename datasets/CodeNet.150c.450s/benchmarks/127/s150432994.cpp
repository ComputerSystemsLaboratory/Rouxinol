#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	for( size_t i = 0; i < N; i++ ) {
		string S;
		cin >> S;
		set<string>SS;
		SS.insert( S );
		for( int i = 1; i < S.size(); i++ ) {
			string T, U;
			T = S.substr( i );
			U = S.substr( 0, i );
			SS.insert( U + T );
			SS.insert( T + U );
			reverse( T.begin(), T.end() );
			SS.insert( U + T );
			SS.insert( T + U );
			reverse( U.begin(), U.end() );
			SS.insert( U + T );
			SS.insert( T + U );
			reverse( T.begin(), T.end() );
			SS.insert( U + T );
			SS.insert( T + U );
		}
		reverse( S.begin(), S.end() );
		SS.insert( S );
		cout << SS.size() << endl;
	}
}