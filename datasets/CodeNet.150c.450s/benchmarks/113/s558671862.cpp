#include <cstdio>
using namespace std;

int main()
{

	int i = 0;
	int dataArr[10000];

	while( scanf( "%d", &dataArr[i] ), dataArr[i] ) i++;

	for( int j = 0; j <= i - 1; j++ ) printf( "Case %d: %d\n", j + 1, dataArr[j] ); 

	return 0;

}