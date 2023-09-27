#include <bits/stdc++.h>
using namespace std;

#define NUM 200
vector<long long int>data1( NUM );
vector<long long int>data2;
vector<long long int>memo1;
vector<long long int>memo2;

long long int saiki1( long long int N ) {
	if( N < 0 ) {
		return INT_MAX / 6;
	}
	if( memo1[N] != INT_MAX / 6 ) {
		return memo1[N];
	}
	long long int ret = INT_MAX / 6;
	auto ite = lower_bound( data1.begin(), data1.end(), N );
	while( ite != data1.begin() ) {
		ret = min( ret, saiki1( N - (*ite) ) + 1 );
		ite--;
	}
	if( ret == INT_MAX / 6 ) {
		ret = N;
	}
	return memo1[N] = ret;
}

long long int saiki2( long long int N ) {
	if( N < 0 ) {
		return INT_MAX / 6;
	}
	if( memo2[N] != INT_MAX / 6 ) {
		return memo2[N];
	}
	long long int ret = INT_MAX / 6;
	auto ite = lower_bound( data2.begin(), data2.end(), N );
	while( ite != data2.begin() ) {
		ret = min( ret, saiki2( N - (*ite) ) + 1 );
		ite--;
	}

	if( ret == INT_MAX / 6 ) {
		ret = N;
	}
	return memo2[N] = ret;
}

int main() {
	memo1.resize( 1e6, INT_MAX / 6 );
	memo2.resize( 1e6, INT_MAX / 6 );
	iota( data1.begin(), data1.end(), 1 );
	for( size_t i = 1; i < NUM; i++ ) {
		data1[i] += data1[i - 1];
	}
	for( size_t i = 1; i < NUM; i++ ) {
		data1[i] += data1[i - 1];
	}
	for( size_t i = 0; i < NUM; i++ ) {
		if( data1[i] % 2 ) {
			data2.emplace_back( data1[i] );
		}
	}
	long long int N;
	while( cin >> N, N ) {
		cout << saiki1( N ) << " " << saiki2( N ) << endl;
	}
}