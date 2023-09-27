#include<iostream>
using namespace std ;

int m[1000001] = {} ;

void cal(){
	m[0] = 1 ;
	m[1] = 1 ;
	for( int i=2 ; i<=1000000 ; i++ ){
		for( int j=2 ; j<=1000000  ; j++ ){
			if( i*j <= 1000000 ) m[i*j] = 1 ;
			else break ;
		}
	}
}

int main(){
	
	int a , d , n ;
	int count , p ;
	cal();
	
	while(1){
		cin >> a >> d >> n ;
		if( a==0 && d==0 && n==0 ) break ;
		
		count = 0 ;
		p=0 ;
		while( count < n ){
			if( a+d*p <= 1000000 && m[a+d*p] == 0 ) count++ ;
			p++;
		}
		
		cout << a+d*(p-1) << endl ;
	}
	
return 0 ;
}