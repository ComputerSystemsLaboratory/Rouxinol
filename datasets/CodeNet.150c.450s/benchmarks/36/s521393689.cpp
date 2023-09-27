#include<iostream>

using namespace std;

#define MAX_X 600

int main(void)
{
	int d;
	int s = 0;

	while(1){
		while(1){
			cin >> d;
			if( MAX_X % d == 0 ) break;
		}
		if( cin.eof() ) break;

		for( int i = 0 ; i < MAX_X / d ; i++ )
		{
			int height = ( i * d ) * ( i * d );
			int width = d;
			s += height * width;
		}
		cout << s << endl;
		s = 0;
	}

	return 0;
}