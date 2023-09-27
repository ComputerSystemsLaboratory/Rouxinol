#include<iostream>
#include<cstdio>
#include<random>
using namespace std;

struct Dice
{
	int Top, Front, Right, Left, Back, Bottom;
};


void roll (Dice &d1, int r);

int main()
{
	Dice d1;	
	cin >> d1.Top >> d1.Front >> d1.Right >> d1.Left >> d1.Back >> d1.Bottom;
	int q;
	cin >> q;
	for (int a, b; q > 0; q--)
	{
		cin >> a >> b;
		while (d1.Top != a || d1.Front != b)
			roll(d1, rand()%4);
		cout << d1.Right << endl;
	}
	return 0;
}


void roll (Dice &d1, int r)
{
	switch (r)
		{
			case 0:	  swap(d1.Top, d1.Back); 
					  swap(d1.Back, d1.Bottom);
					  swap(d1.Bottom, d1.Front);
					  break;
			case 1:	  swap(d1.Top, d1.Front);
					  swap(d1.Front, d1.Bottom);
					  swap(d1.Bottom, d1.Back);
					  break;
			case 2:   swap(d1.Top, d1.Left);
					  swap(d1.Left, d1.Bottom);
					  swap(d1.Bottom, d1.Right);
					  break;
			case 3:   swap(d1.Top, d1.Right);
					  swap(d1.Right, d1.Bottom);
					  swap(d1.Bottom, d1.Left);
					  break;
		}
}

