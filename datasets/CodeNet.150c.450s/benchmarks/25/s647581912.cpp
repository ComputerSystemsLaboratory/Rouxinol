#include <stdio.h>
#include <ctype.h>
#include <map>

typedef std::map<char,int> counter_map;

int main( int argc , char** argv )
{
	int c;
	counter_map counter;

	while( 1 )
	{
		c = getchar();
		if( c == EOF )
		{
			break;
		}

		c = tolower( c );

		counter_map::iterator itr = counter.find( c );
		if( itr == counter.end() )
		{
			counter.insert( counter_map::value_type( c , 1 ) );
		}
		else
		{
			itr->second++;
		}
	}


	for( int i = 'a' ; i <= 'z' ; i++ )
	{
		counter_map::iterator itr = counter.find( i );
		if( itr == counter.end() )
		{
			printf( "%c : %d\n" , i , 0 );
		}
		else
		{
			printf( "%c : %d\n" , itr->first , itr->second );
		}
	}

	return 0;
}