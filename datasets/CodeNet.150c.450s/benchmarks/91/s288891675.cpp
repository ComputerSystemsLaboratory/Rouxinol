#include<iostream>
using namespace std ;

int p_num[1000000] = {} ;
int d[1000000] = {} ;

void cal(){
	for( int i=2 ; i<1000000 ; i++ ){
		if( p_num[i] == 0 ){
			for( int j=2 ; j<1000000 ; j++ ){
				if( i*j > 1000000 ) break ;
				p_num[i*j] = 1 ;
			}
		}
	}
	
	for( int i=2 ; i<1000000 ; i++ ){
		if( p_num[i] == 0 ) d[i] = d[i-1] +1 ;
		else d[i] = d[i-1] ;
	}
}

int main(){
	
	cal() ;
	
	int n ;
	while(1){
		cin >> n ;
		if( cin.eof() ) break ;
		
		cout << d[n] << endl ;
	}
	
return 0 ;
}