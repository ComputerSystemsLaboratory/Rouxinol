#include <iostream>
using namespace std ;

int main()
{
	int months[12] = { 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;

	int getmonth , getday ;

	while( cin >> getmonth >> getday )
	{
		if( getmonth == 0 ){ break ; }

		getmonth -- ;
		while( getmonth > 0 )
		{
			getday += months[getmonth-1] ;
			getmonth -- ;
		}

		if( getday %7 == 0 )
		{
			cout << "Wednesday" << endl ;
		}
		else if( getday %7 == 1 )
		{
			cout << "Thursday" << endl ;
		}
		else if( getday %7 == 2 )
		{
			cout << "Friday" << endl ;
		}
		else if( getday %7 == 3 )
		{
			cout << "Saturday" << endl ;
		}
		else if( getday %7 == 4 )
		{
			cout << "Sunday" << endl ;
		}
		else if( getday %7 == 5 )
		{
			cout << "Monday" << endl ;
		}
		else if( getday %7 == 6 )
		{
			cout << "Tuesday" << endl ;
		}
	}
	return 0 ;
}