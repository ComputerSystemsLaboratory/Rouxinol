#include<iostream>

using namespace std ;

int main()
{
	int n ;
	while( cin >> n , n )
	{
		int a ,b ;
		int acnt = 0 , bcnt = 0 ;
		while( n )
		{
			n-- ;
			cin >> a >> b ;
			if( a == b )
			{
				acnt += a ;
				bcnt += b ;
			}
			else
			{
				a > b ? acnt += a + b : bcnt += a + b ;
			}
		}
		cout << acnt << ' ' << bcnt << endl ;
	}
	return 0 ;
}