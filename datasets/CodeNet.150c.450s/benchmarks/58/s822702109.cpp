#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main()
{
    stack<int> stk;
    char s[100];
    int a, b;
    while( scanf( "%s", s ) != EOF ) {
	if ( s[0] == '+' ) {
	    b = stk.top(); stk.pop();
	    a = stk.top(); stk.pop();
	    stk.push( a + b );
	}
	else if ( s[0] == '-' ) {
	    b = stk.top(); stk.pop();
	    a = stk.top(); stk.pop();
	    stk.push( a - b );
	}
	else if ( s[0] == '*' ) {
	    b = stk.top(); stk.pop();
	    a = stk.top(); stk.pop();
	    stk.push( a * b );
	}
	else {
	    int v = atoi( s );
	    stk.push( v );
	}
    }
    
    printf("%d\n", stk.top());

    return 0;

}