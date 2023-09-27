#include <stdio.h>
#include <deque>
#include <map>

struct PoolInfoEntry
{
	int position;
	int capacity;
};
typedef std::deque<PoolInfoEntry> PoolInfo;

typedef std::deque<int> PositionInfo;

int main( int argc , char** argv )
{
	int total_capacity = 0;
	int position = 0;
	PoolInfo pool_info;
	PositionInfo position_info;

	while( 1 )
	{
		int c = getchar();
		if( c == EOF )
		{
			break;
		}
		if( c == '\\' )
		{
			position_info.push_back( position );
		}
		if( c == '/' )
		{
			if( !position_info.empty() )
			{
				int start_position = position_info.back();
				int capacity = position - start_position;

				total_capacity += capacity;

				while( ( !pool_info.empty() ) && ( start_position < pool_info.back().position ) )
				{
					capacity += pool_info.back().capacity;
					pool_info.pop_back();
				}
				PoolInfoEntry entry;
				entry.position = start_position;
				entry.capacity = capacity;
				pool_info.push_back( entry );

				position_info.pop_back();
			}
		}
		position++;
	}

	printf( "%d\n" , total_capacity );
	printf( "%d" , pool_info.size() );
	for( PoolInfo::const_iterator itr = pool_info.begin() ; itr != pool_info.end() ; itr++ )
	{
		printf( " %d" , itr->capacity );
	}
	printf( "\n" );
	return 0;
}