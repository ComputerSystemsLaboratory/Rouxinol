#include <iostream>

int main()
{
	int v[2][4];
	while( std::cin>>v[0][0]>>v[0][1]>>v[0][2]>>v[0][3]>>v[1][0]>>v[1][1]>>v[1][2]>>v[1][3] )
	{
		int hit = 0, blow = 0;

		for( int i=0; i<4; ++i )
		{
			if( v[0][i] == v[1][i] )
			{
				++hit;
				continue;
			}

			for( int j=0; j<4; ++j )
			{
				blow += v[0][i] == v[1][j];
			}
		}

		std::cout << hit << ' ' << blow << '\n';
	}
}