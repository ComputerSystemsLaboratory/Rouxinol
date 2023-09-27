#include <stdio.h>
#include <deque>
#include <map>

struct PoolInfoEntry
{
	int position;
	int capacity;
};
typedef std::deque<PoolInfoEntry> PoolInfo;

typedef std::deque<int> OutData;

//left : depth
//right : position
typedef std::map<int,int> PositionInfo;

void create_outdata( const PoolInfo& pool , OutData& odata )
{
	odata.clear();
	if( pool.empty() )
	{
		return;
	}

	PoolInfo::const_reverse_iterator itr = pool.rbegin();
	int position = itr->position;
	int capacity = itr->capacity;
	itr++;

	for( ; itr != pool.rend() ; itr++ )
	{
		if( position < itr->position )
		{
			capacity += itr->capacity;
		}
		else
		{
			odata.push_front( capacity );
			position = itr->position;
			capacity = itr->capacity;
		}
	}

	if( capacity != 0 )
	{
		odata.push_front( capacity );
	}
}

int main( int argc , char** argv )
{
	int total_capacity = 0;
	int position = 0;
	int depth = 0;
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
			depth--;
			position_info[ depth ] = position;
		}
		if( c == '/' )
		{
			PositionInfo::iterator itr = position_info.find( depth );
			if( itr != position_info.end() )
			{
				int capacity = position - itr->second;
				total_capacity += capacity;

				PoolInfoEntry entry;
				entry.capacity = capacity;
				entry.position = itr->second;
				pool_info.push_back( entry );

				position_info.erase( itr );
			}
			depth++;
		}
		position++;
	}

	OutData out_data;
	create_outdata( pool_info , out_data );

	printf( "%d\n" , total_capacity );
	printf( "%d" , out_data.size() );
	for( OutData::iterator itr = out_data.begin() ; itr != out_data.end() ; itr++ )
	{
		printf( " %d" , *itr );
	}
	printf( "\n" );
	return 0;

}