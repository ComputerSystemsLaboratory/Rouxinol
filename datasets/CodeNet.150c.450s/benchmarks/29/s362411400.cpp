#include <stdio.h>
#include <string.h>
#include <list>

using namespace std;

int main()
{
    int n;
    char s[16];
    int d;
    list<int> l;
    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++ ) {
	scanf("%s", s);
	if ( !strcmp( s, "insert" ) ) {
	    scanf("%d", &d);
	    l.push_front(d);
	}
	else if ( !strcmp( s, "delete" ) ) {
	    scanf("%d", &d);
	    
	    for ( list<int>::iterator it = l.begin(); it != l.end(); it++ ) {
		if ( *it == d ) {
		    l.erase( it );
		    break;
		}
	    }
	}
	else if ( !strcmp( s, "deleteFirst" ) ) {
	    l.pop_front();
	}
	else if ( !strcmp( s, "deleteLast" ) ) {
	    l.pop_back();
	}
    }

    for ( list<int>::iterator it = l.begin(); it != l.end(); it++ ) {
	if ( it != l.begin() ) {
	    printf(" ");
	}
	printf("%d", *it);
    }
    printf("\n");
    
    return 0;
}