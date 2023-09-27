#include <cstdio>
using namespace std;

int main()
{

	int x, y;

	while( scanf( "%d %d", &x, &y ), x || y ) printf( "%d %d\n", x > y ? y : x, x > y ? x : y );

	return 0;

}