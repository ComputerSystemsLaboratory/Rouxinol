#include <iostream>

using namespace std;

int gcd( int m, int n ){
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}

int lcm( int m, int n ){
	return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}

int main(){
 int a, b;
 while (cin >> a >> b) cout << gcd(a,b) << " "<< lcm(a,b) << endl;
}