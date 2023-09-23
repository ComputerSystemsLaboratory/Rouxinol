#include<iostream>
using namespace std;
int GCD( int m, int n )
{
	
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}
int LCM( int m, int n )
{
	
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	return ((m / GCD(m, n)) * n); 
}
int main()
{
	int n,m;
	while(cin>>n>>m){
		cout<<GCD(n,m)<<" "<<LCM(n,m)<<endl;
	}
}