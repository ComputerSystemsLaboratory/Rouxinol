#include <stdio.h>

int m ;
int d ;
int dayc ;

const int days[13] = { 0 , 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;

int main ( )
{
	while ( scanf ( "%d %d" , &m , &d ) == 2 && m && d ) {
		dayc = 0 ;
		for ( int i = 0 ; i < m ; i++ ) {
			dayc += days[i] ;
		}
		dayc += d ;
		dayc-- ;
		dayc %= 7 ;
		switch ( dayc ) {
			case 0 :
				printf ( "Thursday\n" ) ;
				break ;
			case 1 :
				printf ( "Friday\n" ) ;
				break ;
			case 2 :
				printf ( "Saturday\n" ) ;
				break ;
			case 3 :
				printf ( "Sunday\n" ) ;
				break ;
			case 4 :
				printf ( "Monday\n" ) ;
				break ;
			case 5 :
				printf ( "Tuesday\n" ) ;
				break ;
			case 6 :
				printf ( "Wednesday\n" ) ;
				break ;
		}
	}
	return 0 ;
}