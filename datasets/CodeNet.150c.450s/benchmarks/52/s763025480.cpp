#include<stdio.h>


struct STACK
{
	int num[ 10 ] ;
	int p ;
	
	int		Top( void )	;
	void	Push( int )	;
	void	Pop( void )	;
	void	Init( void ) ;
} stack ;


int main( void )
{
	stack.Init() ;

	int kale ;
	while( scanf( "%d" ,&kale ) != EOF )
	{
		if( kale == 0 )
		{
			printf( "%d\n" ,stack.Top() ) ;

			stack.Pop() ;
		}

		else
		{
			stack.Push( kale ) ;
		}
	}

	return 0 ;
}


void STACK::Init( void )
{
	p = 0 ;
}

void STACK::Push( int kale )
{
	num[ p++ ] = kale ;
}

void STACK::Pop( void )
{
	--p ;
}

int STACK::Top( void )
{
	return num[ p - 1 ] ;
}
