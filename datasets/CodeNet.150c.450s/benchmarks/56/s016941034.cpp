#include <cstdio>
using namespace std;

static const int MAX_N = 1000001;

int main()
{

	int n, a, min = MAX_N, max = -MAX_N;
	long long sum = 0;

	scanf( "%d", &n );
	for( int i = 0; i < n; i++ ) {

		scanf( "%d", &a );
		if( a < min ) min = a;
		if( a > max ) max = a;

		sum += a;

	}

	printf( "%d %d %ld\n", min, max, sum );

	return 0;

}