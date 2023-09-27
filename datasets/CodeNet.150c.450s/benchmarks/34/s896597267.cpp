#include <bits/stdc++.h>
using namespace std;

vector<long long int>D;

int main() {
	long long int N;
	D.push_back( 1 );
	D.push_back( 1 );
	D.push_back( 2 );
	D.push_back( 4 );
	while( cin >> N, N ) {
		while( D.size() <= N ) {
			D.push_back( D[D.size() - 1] + D[D.size() - 2] + D[D.size() - 3] );
		}
		cout << D[N] / 3650 + 1 << endl;
	}
}