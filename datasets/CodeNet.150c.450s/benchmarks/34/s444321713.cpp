#include<iostream>
using namespace std ;

int s[31] = {} ;
int ans[31] = {} ;

void cal(){
	s[1] = 1 ;
	s[2] = 2 ;
	s[3] = 4 ;
	
	for( int i=4 ; i<=30 ; i++ ){
		s[i] = s[i-1] + s[i-2] + s[i-3] ;
	}
	
	for( int i=1 ; i<=30 ; i++ ){
		ans[i] = s[i] / 3650 ;
		if( s[i] % 3650 > 0 ) ans[i]++ ;
	}
}

int main(){
	
	cal() ;
	
	int n ;
	
	while( cin >> n , n ){
		cout << ans[n] << endl ;
	}
	
return 0 ;
}