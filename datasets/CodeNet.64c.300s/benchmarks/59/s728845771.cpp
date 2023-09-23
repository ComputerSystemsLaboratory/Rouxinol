#include<iostream>

using namespace std;

bool isPrime( int x )
{
	if( 2 == x ) { return true; }
	if( 0 == x%2 ) { return false; }
	
	for( int i=3; i*i<=x; i+=2 ) {
		if( 0 == x%i ) { return false; }
	}
	return true;
}

int main( )
{	
    int n;
    
    cin>>n;
    
    int cnt = 0, num;
    while( n-- ) {
    	cin>>num;
    	cnt += isPrime( num );
    }
    cout<<cnt<<endl;
	
	return 0;
}