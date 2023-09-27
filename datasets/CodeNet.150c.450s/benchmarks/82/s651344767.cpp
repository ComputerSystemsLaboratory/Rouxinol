#include <iostream>
using namespace std;

struct Dice
{
	Dice(int d[6]){
		for(int i = 0; i < 6; ++i)
			n[i] = d[i];
	}
	int getIndex( int a ){
		for(int i = 0; i < 6; ++i){
			if( n[i] == a )
				return i;
		}
		return -1;
	}
	int getRightNumberOfTopFront( int t, int f ){
		return n[getRightIndexOfTopFront( getIndex(t), getIndex(f) )]; 
	}
	int getRightIndexOfTopFront( int t, int f ){
		switch( t )
		{
		case 0:
			switch( f )
			{
			case 1: return 2;
			case 2: return 4;
			case 3: return 1;
			case 4: return 3;
			}
		case 1:
			switch( f )
			{
			case 0: return 3;
			case 2: return 0;
			case 3: return 5;
			case 5: return 2;
			}
		case 2:
			switch( f )
			{
			case 0: return 1;
			case 1: return 5;
			case 4: return 0;
			case 5: return 4;
			}
		case 3:
			switch( f )
			{
			case 0: return 4;
			case 1: return 0;
			case 4: return 5;
			case 5: return 1;
			}
		case 4:
			switch( f )
			{
			case 0: return 2;
			case 2: return 5;
			case 3: return 0;
			case 5: return 3;
			}
		case 5:
			switch( f )
			{
			case 1: return 3;
			case 2: return 1;
			case 3: return 4;
			case 4: return 2;
			}
		}
		return -1;
	}
	int n[6];
};

int main()
{
	int n, i, t, f, d[6] = {};
	for(i = 0; i < 6; ++i)
		cin >> d[i];

	Dice dice(d);
	cin >> n;
	for(i = 0; i < n; ++i){
		cin >> t >> f;
		cout << dice.getRightNumberOfTopFront( t, f ) << "\n";
	}

	return 0;
}