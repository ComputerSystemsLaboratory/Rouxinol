#include<iostream>
using namespace std ;
int main()
{
	int ten ,a = 0 ,b = 0 ;
	for( short i = 0 ; i < 4 ; i++ )
	{
		cin >> ten ;
		a += ten ;
	}
	for( short i = 0 ; i < 4 ; i++ )
	{
		cin >> ten ;
		b += ten ;
	}
	cout << ( a < b ? b : a ) << endl ;
	return 0 ;
}