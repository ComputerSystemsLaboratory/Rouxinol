#include <iostream>
#include <stdio.h>
using namespace std ;

int d ;				// 入力を受ける
int total = 0 ;		// 合計

int main()
{
	while( cin >> d )
	{
		for( int i = 1 ; i < (600/d) ; i ++ )
		{
			total += ( (d*i) * (d*i) * d ) ;
		}

		cout << total << endl ;
		total = 0 ;
	}

	return 0 ;
}