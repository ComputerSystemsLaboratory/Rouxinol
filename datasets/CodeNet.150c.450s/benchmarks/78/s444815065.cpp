#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1000001;
const int INF = 1e+8;
 
int f(int n){
	return (n * (n + 1) * (n + 2)) / 6;
}

int main(){
	vector<int> v, w;
	for(int i=1 ; f(i) < MAX_N ; i++ ){
		v.push_back( f(i) );
		if( f(i) % 2 == 1 ){
			w.push_back( f(i) );
		}
	}
	
	// dp[i] := 整数 i を正四面体数の和で表すときの個数の最小値
	int dp[MAX_N];
	int dp2[MAX_N];
	for(int i=0 ; i < MAX_N ; i++ ){
		dp[i] = dp2[i] = INF;
	}
	for(int i=0 ; i < v.size() ; i++ ){
		dp[ v[i] ] = 1;
	}
	for(int i=0 ; i < w.size() ; i++ ){
		dp2[ w[i] ] = 1;
	}
	for(int i=1 ; i < MAX_N ; i++ ){
		if( dp[i] != INF ){
			for(int j=0 ; j < v.size() && i + v[j] < MAX_N ; j++ ){
				dp[ i + v[j] ] = min( dp[i+v[j]] , dp[i] + 1 );
			}
		}
		if( dp2[i] != INF ){
			for(int j=0 ; j < w.size() && i + w[j] < MAX_N ; j++ ){
				dp2[ i + w[j] ] = min( dp2[i+w[j]] , dp2[i] + 1 );
			}
		}
	}
	
	int n;
	while( cin >> n , n ){
		cout << dp[n] << " " << dp2[n] << endl;
	}
}