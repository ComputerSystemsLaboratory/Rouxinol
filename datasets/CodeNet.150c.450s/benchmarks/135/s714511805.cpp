#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	int n,m ;
	while( cin >> n >> m , n ){
		int y[n+1] , x[m+1] ;
		y[0] = 0 ;
		x[0] = 0 ;
		for( int i=1 ; i<=n ; i++ ){
			cin >> y[i] ;
			y[i] += y[i-1] ;
		}
		for( int i=1 ; i<=m ; i++ ){
			cin >> x[i] ;
			x[i] += x[i-1] ;
		}
		
		map<int,int> cnt ;
		for( int i=1 ; i<=n ; i++ ){
			for( int j=0 ; j+i<=n ; j++ ){
				cnt[y[j+i]-y[j]]++ ;
			}
		}
		
		int ans=0 ;
		for( int i=1 ; i<=m ; i++ ){
			for( int j=0 ; j+i<=m ; j++ ){
				ans += cnt[x[j+i]-x[j]] ;
			}
		}
		
		cout << ans << endl ;
	}
	
return 0;
}