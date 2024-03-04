#include<stdio.h>
#include<string.h>



int main()
{
	int a ,b ;

	while( scanf( "%d %d" ,&a ,&b ) != EOF )
	{
		char str[ 256 ] ;
		sprintf( str ,"%d" ,a + b ) ;


		printf( "%d\n" ,strlen( str ) ) ;
	}


	return 0 ;
}