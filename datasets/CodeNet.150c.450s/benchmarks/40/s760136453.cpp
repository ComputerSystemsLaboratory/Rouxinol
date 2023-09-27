#include<cstdio>

#define LABEL_MAX 100
#define LABEL_MIN 0
#define ORDER_MAX 100
#define ORDER_MIN 0


class Dice
{
	public:
		Dice();
		int roll( int NSEW );
		int GetLabel( void );
		int PrintLabel( void );
	private:
		int top, south, east, north, west, bottom;
		int label[6];
};


Dice::Dice()
{
	top = 0;
	south = 1;
	east = 2;
	west = 3;
	north = 4;
	bottom = 5;
}


int Dice::roll( int NSEW )
{
	int cpy = top;
	
	if( NSEW == 'N' )
	{
		top = south;
		south = bottom;
		bottom = north;
		north = cpy;
	}
	else if( NSEW == 'S' )
	{
		top = north;
		north = bottom;
		bottom = south;
		south = cpy;
	}
	else if( NSEW == 'E' )
	{
		top = west;
		west = bottom;
		bottom = east;
		east = cpy;
	}
	else if( NSEW == 'W' )
	{
		top = east;
		east = bottom;
		bottom = west;
		west = cpy;
	}
	else
	{
		return -1;
	}
	
	return 0;
}


int Dice::GetLabel(void)
{
	for( int i = 0; i < 6; i++ )
	{
		scanf( "%d", &label[i] );
		if( ( label[i] > LABEL_MAX ) || ( label[i] < LABEL_MIN ) )
		{
			return -1;
		}
	}
	
	return 0;
}


int Dice::PrintLabel( void )
{
	switch( top )
	{
		case 0:
			printf("%d\n", label[0] );
			break;
		case 1:
			printf("%d\n", label[1] );
			break;
		case 2:
			printf("%d\n", label[2] );
			break;
		case 3:
			printf("%d\n", label[3] );
			break;
		case 4:
			printf("%d\n", label[4] );
			break;
		case 5:
			printf("%d\n", label[5] );
			break;
		default:
			break;
	}
	
	return 0;
}


int main(void)
{
	Dice dice;
	char c;
	
	if( dice.GetLabel() == 0 )
	{
		for(int i = 0; scanf( "%c", &c ) == 1; i++)
		{
			if( dice.roll( c ) == 0 )
			{
				if( ( i < ORDER_MIN ) || ( i > ORDER_MAX ) )
				{
					return -1;
				}
			}
		}
	}
	else
	{
		return -1;
	}
	
	dice.PrintLabel();
	
	return 0;
}