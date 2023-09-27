#include<iostream>
#include<iterator>
#include<cmath>
#include<algorithm>
using namespace std;

long A0 , L ;

long A[750] ; 	//a[j],current i
	
void init (){
	A[0]=A0;
}
long mypow ( long a , long b ){
    long ans = 1 ;
    while ( b > 0 )
    {
         ans *= 10 ;   
         b--;
    }
    return ans ; 
}

void sep (long *b , long x ){
	long i;
	for ( i = 0 ; x >= 10 ; b[i] = x%10 , x/=10 , i++ ) ; 
	b[i++] = x ; 
	while ( i < L )
		b[i++] = 0 ;
		
	sort(&b[0],&b[L]);
}

long getmax ( long x ) {
	long b[10] ;
	long ans = 0 ; 
	sep ( b , x ) ;
	for ( long i = 0 ; i < L ; i++ )
		ans += b[i] * mypow ( 10 , i ) ; 
	return ans ;
}

long getmin ( long x ) {
	long b[10] ;
	long ans = 0 ; 
	sep ( b , x ) ;
	for ( long i = 0 ; i < L ; i++ )
		ans += b[i] * mypow ( 10 , L-i-1 ) ; 
	return ans ;
}
	


void deal ( ) { 
	init ( ) ;
	long t , j = 1 ;
	while ( 1 ) {
		A[j] = getmax ( A [ j-1 ] ) - getmin ( A [ j-1 ] ) ;
		for ( int i = 0 ; i < j ; i++ )
			if ( A[i] == A[j] )
			{
				cout << i << ' ' << A[j] << ' ' << j - i << endl ;
				goto hahahaha;
			}
		j++;
	}
	
	hahahaha:
		return;
	
}


int main() {
	cin >> A0 >> L ;
	while ( L )
	{
		deal ( ) ;
		cin >> A0 >> L ; 
	}
	return 0;
}