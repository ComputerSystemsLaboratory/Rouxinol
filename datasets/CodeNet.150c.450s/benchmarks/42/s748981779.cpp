#include <stdio.h>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;
typedef pair<char[10], int> process;
int main()
{
    int n, q;
    queue<process> Q;
    int total_time = 0;
    scanf("%d %d", &n, &q);

    for ( int i = 0; i < n; i++ ) {
	process p;
	scanf("%s %d", p.first, &p.second);
	Q.push( p );
    }

    while( !Q.empty() ) {
	int exe_time;
	process p = Q.front(); Q.pop();
	exe_time = min( p.second, q );
	p.second -= exe_time;
	total_time += exe_time;
	if ( p.second > 0 ) {
	    Q.push( p );
	}
	else {
	    printf("%s %d\n", p.first, total_time);
	}


    }

    return 0;
}