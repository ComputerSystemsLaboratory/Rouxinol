#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FOR( a,b ) for( a=0;a<b;a++ )
 
int main(){
    int a,b;
    char buf[200][20];
    int cnt = 0;
    while( scanf( "%d %d",&a,&b ) != EOF ){
    	sprintf( buf[cnt++],"%d",a+b );
    }
    
    FOR( a,cnt )printf( "%d\n",strlen( buf[a] ));
    return 0;
}