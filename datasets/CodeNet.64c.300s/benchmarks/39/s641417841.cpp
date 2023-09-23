#include <iostream>
using namespace std;
int main(){
	short int n , a , b , c , d ;
	while( cin >> n ){
		int num =0 ;
		for( a=0 ; a<10 ; a++ )
			for( b=0 ; b<10 ; b++ )
				for( c=0 ; c<10 ; c++ )
					for( d=0 ; d<10 ; d++ )
						if( a+b+c+d == n )
							num ++ ;
						cout << num << endl;
	}
}