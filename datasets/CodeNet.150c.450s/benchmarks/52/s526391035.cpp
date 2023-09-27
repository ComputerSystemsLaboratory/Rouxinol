#include <stdio.h>

class stack
{
private:
	int rail[10];
	int nowRail;
public:
	stack( void );
	void add( int number );
	int gone( void );
};

stack::stack( void )
{
	nowRail = 0;
}

void stack::add( int number )
{
	rail[nowRail] = number;
	nowRail++;
}

int stack::gone( void )
{
	nowRail--;
	return (rail[nowRail]);
}

int main( void )
{
	int number;
	stack* Stack = new stack();
	
	while( scanf( "%d", &number ) != EOF )
	{
		if( number == 0 )
		{
			printf( "%d\n", Stack->gone() );
		}
		else
		{
			Stack->add( number );
		}
	}
	
	return (0);
}