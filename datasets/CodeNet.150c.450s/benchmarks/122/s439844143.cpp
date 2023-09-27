#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;


int main()
{
    priority_queue<int> pq;

    while ( true ) {
	char str[100];
	scanf("%s", str);
	if ( !strcmp( str, "end" ) ) break;
	if ( !strcmp( str, "insert" ) ) {
	    int d;
	    scanf("%d", &d);
	    pq.push(d);
	}
	else {
	    int d = pq.top();
	    pq.pop();
	    printf("%d\n", d);
	}
    }

    return 0;
}