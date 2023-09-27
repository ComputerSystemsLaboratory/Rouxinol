#include <iostream>
using namespace std;

struct Dice
{
	Dice(int d[6]){
		for(int i = 0; i < 6; ++i)
			n[i] = d[i];
	}
	void toN(){ shift( n[0], n[1], n[5], n[4] ); }
	void toS(){ shift( n[0], n[4], n[5], n[1] ); }
	void toW(){ shift( n[0], n[2], n[5], n[3] ); }
	void toE(){ shift( n[0], n[3], n[5], n[2] ); }
	void shift( int& a, int& b, int& c, int& d ){
		int t = a;
		a = b;
		b = c;
		c = d;
		d = t;
	}
	int n[6];
};

int main()
{
	int i, d[6] = {};
	for(i = 0; i < 6; ++i)
		cin >> d[i];

	Dice dice(d);
	char c;
	cin.get(c);
	while( cin.get(c) ){
		if( c == '\n' )
			break;
		switch(c)
		{
		case 'N': dice.toN(); break;
		case 'S': dice.toS(); break;
		case 'W': dice.toW(); break;
		case 'E': dice.toE(); break;
		}
	}

	cout << dice.n[0] << "\n";
	
	return 0;
}