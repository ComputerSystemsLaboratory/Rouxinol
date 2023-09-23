#include<iostream>
using namespace std ;

int n ;
int m[110] ;
long long int dp[110][30] ;

long long int f( int p , int sum ){
	
	if( p == n-2 ){
		if( sum == m[p+1] ) return 1 ;
	}
	
	if( dp[p][sum] != -1 ) return dp[p][sum] ;
	
	long long int ans = 0 ;
	if( sum + m[p+1] <= 20 ){
		ans += f( p+1 , sum + m[p+1] ) ;
	}
	if( sum - m[p+1] >= 0 ){
		ans += f( p+1 , sum - m[p+1] ) ;
	}
	return dp[p][sum] = ans ;
}

int main(){
	
	cin >> n ;
	for( int i=0 ; i<n ; i++ ) cin >> m[i] ;
	
	for( int i=0 ; i<110 ; i++ )
		for( int j=0 ; j<30 ; j++ )
			dp[i][j] = -1 ;
	
	cout << f(0,m[0]) << endl ;
	
return 0 ;
}