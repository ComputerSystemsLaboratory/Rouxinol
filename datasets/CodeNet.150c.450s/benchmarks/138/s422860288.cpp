#include<iostream>

using namespace std;

int gcd( int x, int y )
{
	if( 0 == y ) {
		return x;
	} else {
		return gcd( y, x%y );
	}
}


int main()
{

    int a,b;
      
   cin>>a>>b;
   	
    cout<<gcd( max( a, b ), min( a, b ) )<<endl;
	
    return 0;
}