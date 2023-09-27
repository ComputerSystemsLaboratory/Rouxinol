#include <stdio.h>
#include <string.h>
#include <set>
#include <string>

using namespace std;

int main()
{
    int n;
    char command[10];
    char str[20];
    set< string > S;
    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf("%s", command);
	scanf("%s", str);
	if ( !strcmp( command, "insert" ) ) {
	    S.insert( str );
	}
	else if ( !strcmp( command, "find" ) ) {
	    set<string>::iterator it = S.find( str );
	    if ( it == S.end() ) {
		printf("no\n");
	    }
	    else {
		printf("yes\n");
	    }
	}
    }
    
    return 0;
}