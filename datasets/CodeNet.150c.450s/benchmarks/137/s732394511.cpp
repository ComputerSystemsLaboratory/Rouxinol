#include <cstdio>
#include <cstring>
#include <list>

using namespace std;

#define M 1048721
#define null (-1)
#define L 14

char H[M][L];

//??????????????°????????????

int getnumber( char c ){

    if( c == 'A' ) return 1;
    else if( c =='C' ) return 2;
    else if( c == 'G' ) return 3;
    else if( c == 'T' ) return 4;
    else return 0;

}

//???????????????key?????????

long long str_to_key( char str[] ){

    long long p = 1, sum = 0, i;
    
    for( i = 0 ; i < strlen(str) ; i++ ){

        sum += p * getnumber( str[i] ) ;

        p *= 5;

    }

    return sum;

} 

//???????????\??¢??°???????£?

int h1( int key ){

    return key % M;

}

int h2( int key ){

    return 1 + key % ( M - 1 );

} 

long long h( int key, int i ){

    return ( h1(key) + i * h2(key) ) % M ;

}

//insert

int insert( char A[] ){

    long long key, j, i;

    key = str_to_key( A );

    for( i = 0 ;; i++ ){

        j = h( key, i);

        if( strcmp( H[j] , A ) == 0 ){
        
            return 1;

        } else if( strlen(H[j]) == 0 ){

            strcpy( H[j] , A );
            return 0;

        }

    }

}

//search

int search( char A[] ){

    long long key, j, i;

    key = str_to_key( A );

    for( i = 0 ;; i++ ){

        j = h( key, i);

        if( strcmp( H[j], A ) == 0 ){

            return 1;

        } else if( strlen(H[j]) == 0 ){

            return 0;

        }

    }

    return 0;

} 

//??¬???

int main(){

    int n , i = 0;

    scanf("%d", &n);

    char str[L], cmd[10];

    for( i = 0; i < M ; i++ ) H[i][0] = '\0';

    for( i = 0 ; i < n ; i++ ){

        scanf("%s %s", cmd, str);

        if( cmd[0] == 'i' ){

            insert( str );

        }else if( cmd[0] == 'f' ){

            if( search( str ) ) printf("yes\n");
            else printf("no\n");

        }

    }

    return 0;

}