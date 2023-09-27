#include <cstdio>
#include <stack>
using namespace std;

#define start first
#define end second

static const int NOT   = false;
static const int WHITE = 1;
static const int GRAY  = 2;
static const int BLACK = 3;
static const int N	   = 101;

int  n;
int  VisitedInfo[N];
bool Graph[N][N];
pair< int, int > Time[N];

void dfs( int u );
int  nextNode( int u );

int main()
{

	int u, k, v;

	for( int i = 0; i < N; i++ ) {
		for( int j = 0; j < N; j++ ) Graph[i][j] = NOT;
		VisitedInfo[i] = WHITE;
	}

	scanf( "%d", &n );
	for( int i = 0; i < n; i++ ) {
		
		scanf( "%d %d", &u, &k );
		for( int j = 0; j < k; j++ ) {

			scanf( "%d", &v );
			Graph[u][v] = true;

		}

	}

	dfs( 1 );

	for( int i = 1; i <= n; i++ ) printf( "%d %d %d\n", i, Time[i].start, Time[i].end );

	return 0;

}

void dfs( int u )
{

	int  time = 1, pos, ppos;
	bool brkUpNodeFlg = false;
	stack< int > dfsInfo;

	dfsInfo.push( u );
	Time[u].start  = time;
	VisitedInfo[u] = GRAY;

	while( !dfsInfo.empty() ) {

		ppos = dfsInfo.top();

		if( !brkUpNodeFlg ) pos = nextNode( ppos );

		brkUpNodeFlg = false;

		if( pos != 0 ) {
			if( VisitedInfo[pos] == WHITE ) {

				dfsInfo.push( pos );
				Time[pos].start  = ++time;
				VisitedInfo[pos] = GRAY;

			}
		}
		if( pos == 0 && VisitedInfo[ppos] != WHITE ){

			dfsInfo.pop();
			Time[ppos].end	  = ++time;
			VisitedInfo[ppos] = BLACK;


		}

		if( dfsInfo.empty() ) {
			for( int i = 1; i <= n; i++ ) {
				if( VisitedInfo[i] == WHITE ) {

					pos = i;
					dfsInfo.push( pos );
					Time[pos].start  = ++time;
					VisitedInfo[pos] = GRAY;
					brkUpNodeFlg     = true;
					break;

				}
			}
		}

	}

}

int nextNode( int now )
{

	for( int i = 1; i <= n; i++ ) {
		if( Graph[now][i] && VisitedInfo[i] == WHITE ) return i;
	}

	return 0;

}