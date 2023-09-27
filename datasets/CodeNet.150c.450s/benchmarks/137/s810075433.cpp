#include <stdio.h>
#include <string.h>

#define M 1046527
#define NIL (-1)
#define L 14
typedef long long ll;

int hash1( ll key );
int hash2( ll key );

ll getKey( char str[] );
int getChar( char ch );
bool find( char str[] );
bool insert( char str[] );

char T[M][L];

int main()
{
    int n;
    char command[8];
    char str[L];

    for ( int i = 0; i < M; i++ ) T[i][0] = '\0';

    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf("%s", command);
	scanf("%s", str);
	if ( !strcmp( command, "insert" ) ) {
	    insert( str );
	}
	else if ( !strcmp( command, "find" ) ) {
	    bool result = find( str );
	    if ( result ) {
		printf("yes\n");
	    }
	    else {
		printf("no\n");
	    }
	}
    }

    return 0;
}


int hash1( ll key )
{
    return ( key % M );
}


int hash2( ll key )
{
    return 1 + ( key % ( M - 1 ) );
}


ll getKey( char str[] )
{
    ll key = 0;
    for ( int i = 0; i < strlen( str ); i++ ) {
	key *= 5;
	key += getChar( str[i] );
    }

    return key;
}


int getChar( char ch )
{
    int ret = 0;
    switch( ch ) {
    case 'A':
	ret = 1;
	break;
    case 'T':
	ret = 2;
	break;
    case 'G':
	ret = 3;
	break;
    case 'C':
	ret = 4;
	break;
    }

    return ret;
}


bool find( char str[] )
{
    ll key = getKey(str);
    ll i, h;
    for ( i = 0; ; i++ ) {
	h = ( hash1( key ) + i * hash2( key ) ) % M;
	if ( !strcmp( T[h], str ) ) return true;
	else if ( strlen( T[h] ) == 0 ) return false;
    }

    return false;
}


bool insert( char str[] )
{
    ll key = getKey( str );
    ll i, h;
    for ( i = 0; ; i++ ) {
	h = ( hash1( key ) + i * hash2( key ) ) % M;
	if ( !strcmp( T[h], str ) ) return false;
	else if ( strlen( T[h] ) == 0 ) {
	    strcpy( T[h], str );
	    return true;
	}
    }
    return false;
}