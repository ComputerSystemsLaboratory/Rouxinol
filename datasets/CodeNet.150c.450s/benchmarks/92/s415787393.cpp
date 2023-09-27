#include<stdio.h>

int main( void ) 
{
	int a,b;
	int  res=0;
	int i;	
	while( EOF != scanf( "%d%d", &a, &b ) ) {
		res=a+b;
		a=10;
		for( i=1; ; i++ ) {
			b=res-a;
			if( 0<=b ) {
				a*=10;			
			} else {
				break;
			}
		}
		printf( "%d\n", i);
	}

	return 0;
}