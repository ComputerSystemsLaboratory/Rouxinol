#include<iostream>
#include<string>

using namespace std;

#define DICETOP 0
#define DICEFRONT 1
#define DICERIGHT 2
#define DICELEFT 3
#define DICEBACK 4
#define DICEBOTTOM 5

class Dice {
private:
	int *diceface;
public:
	Dice( int top, int front, int right, int left, int back, int bottom ) {
		diceface = new int[6];
		diceface[DICETOP] = top;
		diceface[DICEFRONT] = front;
		diceface[DICERIGHT] = right;
		diceface[DICELEFT] = left;
		diceface[DICEBACK] = back;
		diceface[DICEBOTTOM] = bottom;
	}
	~Dice( ) {
		delete [ ] diceface;
	}
	void roll( string cmd ) {
		int t;
		for( int i=0; i<cmd.length(); i++ ) {
			if( 'E' == cmd[i] ) {
				t = diceface[DICETOP];
				diceface[DICETOP] = diceface[DICELEFT];
				diceface[DICELEFT] = diceface[DICEBOTTOM];
				diceface[DICEBOTTOM] = diceface[DICERIGHT];
				diceface[DICERIGHT] = t;
			} else if( 'N' == cmd[i] ) {
				t = diceface[DICETOP];
				diceface[DICETOP] = diceface[DICEFRONT];
				diceface[DICEFRONT] = diceface[DICEBOTTOM];
				diceface[DICEBOTTOM] = diceface[DICEBACK];
				diceface[DICEBACK] = t;
			} else if( 'S' == cmd[i] ) {
				t = diceface[DICETOP];
				diceface[DICETOP] = diceface[DICEBACK];
				diceface[DICEBACK] = diceface[DICEBOTTOM];
				diceface[DICEBOTTOM] = diceface[DICEFRONT];
				diceface[DICEFRONT] = t;
			} else if( 'W' == cmd[i] ) {
				t = diceface[DICETOP];
				diceface[DICETOP] = diceface[DICERIGHT];
				diceface[DICERIGHT] = diceface[DICEBOTTOM];
				diceface[DICEBOTTOM] = diceface[DICELEFT];
				diceface[DICELEFT] = t;
			}
		}
		return;
	}
	int getDiceFace( int face ) {
		return diceface[ face ];
	}
};

int main( )
{
	int t, f, r, l, ba, bo;
	cin>>t>>f>>r>>l>>ba>>bo;
	Dice *dice = new Dice( t, f, r, l, ba, bo );

	string cmd;
	cin>>cmd;
	dice->roll( cmd );
	cout<<dice->getDiceFace( DICETOP )<<endl;

	delete dice;
	
	return 0;
}