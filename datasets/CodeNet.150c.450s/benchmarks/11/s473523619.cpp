#include<iostream>
using namespace std;
int main()
{
	int n, a, i, s[14], h[14], c[14], d[14];
	char suite;
	for ( i = 0; i < 14; i++)s[i] = 0;
	for ( i = 0; i < 14; i++)h[i] = 0;
	for ( i = 0; i < 14; i++)c[i] = 0;
	for ( i = 0; i < 14; i++)d[i] = 0;
	cin >> n;
	for( i = 0; i < n; i++ )
	{
		cin >> suite >> a;
		if ( suite == 'S' )s[(a - 1)] = 1;		
		if ( suite == 'H' )h[(a - 1)] = 1;
		if ( suite == 'C' )c[(a - 1)] = 1;
		if ( suite == 'D' )d[(a - 1)] = 1;
	}
	for ( i = 0; i < 13; i++ )
	{
		if ( s[i] == 0 )cout << "S " << (i + 1) << endl;
	}
	for ( i = 0; i < 13; i++ )
	{
		if ( h[i] == 0 )cout << "H " << (i + 1) << endl;
	}
	for ( i = 0; i < 13; i++ )
	{
		if ( c[i] == 0 )cout << "C " << (i + 1) << endl;
	}
	for ( i = 0; i < 13; i++ )
	{
		if ( d[i] == 0 )cout << "D " << (i + 1) << endl;
	}
return 0;
}