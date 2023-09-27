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
	int *face;
public:
	Dice( int top, int front, int right, int left, int back, int bottom ) {
		face = new int[6];
		face[DICETOP] = top;
		face[DICEFRONT] = front;
		face[DICERIGHT] = right;
		face[DICELEFT] = left;
		face[DICEBACK] = back;
		face[DICEBOTTOM] = bottom;
	}
	~Dice( ) {
		delete [ ] face;
	}
	void roll( string cmd ) {
		int t;
		for( int i=0; i<cmd.length(); i++ ) {
			if( 'E' == cmd[i] ) {
				t = face[DICETOP];
				face[DICETOP] = face[DICELEFT];
				face[DICELEFT] = face[DICEBOTTOM];
				face[DICEBOTTOM] = face[DICERIGHT];
				face[DICERIGHT] = t;
			} else if( 'N' == cmd[i] ) {
				t = face[DICETOP];
				face[DICETOP] = face[DICEFRONT];
				face[DICEFRONT] = face[DICEBOTTOM];
				face[DICEBOTTOM] = face[DICEBACK];
				face[DICEBACK] = t;
			} else if( 'S' == cmd[i] ) {
				t = face[DICETOP];
				face[DICETOP] = face[DICEBACK];
				face[DICEBACK] = face[DICEBOTTOM];
				face[DICEBOTTOM] = face[DICEFRONT];
				face[DICEFRONT] = t;
			} else if( 'W' == cmd[i] ) {
				t = face[DICETOP];
				face[DICETOP] = face[DICERIGHT];
				face[DICERIGHT] = face[DICEBOTTOM];
				face[DICEBOTTOM] = face[DICELEFT];
				face[DICELEFT] = t;
			} else if( 'M' == cmd[i] ) {
				t = face[DICEBACK];
				face[DICEBACK] = face[DICERIGHT];
				face[DICERIGHT] = face[DICEFRONT];
				face[DICEFRONT] = face[DICELEFT];
				face[DICELEFT] = t;
			}
		}
		return;
	}
	int getFace( int diceface ) {
		return face[ diceface ];
	}
};

int main( )
{
	int t, f, r, l, ba, bo;
	cin>>t>>f>>r>>l>>ba>>bo;
	Dice *dice = new Dice( t, f, r, l, ba, bo );
	
	int q;
	cin>>q;
	while( q-- ) {
		cin>>t>>f;
		for( int i=0; i<3; i++ ) {
			if( t == dice->getFace( DICETOP ) ) { break; }
			dice->roll( "N" );
		}
		for( int i=0; i<3; i++ ) {
			if( t == dice->getFace( DICETOP ) ) { break; }
			dice->roll( "W" );
		}
		for( int i=0; i<3; i++ ) {
			if( f == dice->getFace( DICEFRONT ) ) { break; }
			dice->roll( "M" );
		}
		cout<<dice->getFace( DICERIGHT )<<endl;
	}

	delete dice;
	
	return 0;
}