#include <stdio.h>
#include <stdlib.h>

#define MAX_N (110)
typedef long long int ll;

ll stack[MAX_N];
int top;

static
void
initialize();


static
bool
isEmpty();


static
bool
isFull();


static
void
push( ll v );


static
ll
pop();



int main()
{
    char s[100];
    ll a, b;
    while ( scanf("%s", s) != EOF ) {
	if ( s[0] == '+' ) {
	    b = pop();
	    a = pop();
	    push( a + b );
	}
	else if ( s[0] == '-' ) {
	    b = pop();
	    a = pop();
	    push( a - b );
	}
	else if ( s[0] == '*' ) {
	    b = pop();
	    a = pop();
	    push( a * b );
	}
	else {
	    int v = atoi( s );
	    push( v );
	}
    }
    
    printf("%lld\n", pop());

    return 0;
}




static
void
initialize()
{
    top = 0;
}


static
bool
isEmpty()
{
    return (top == 0);
}


static
bool
isFull()
{
    return (top == MAX_N - 1);
}


static
void
push( ll v )
{
    top++;
    stack[top] = v;
}




static
ll
pop()
{
    top--;
    return stack[top + 1];
}