#include<iostream>
#include<cstdio>
using namespace std;

struct Dice
{
	int Top, Front, Right, Left, Back, Bottom;
};

void copy (Dice &a, Dice &b)
{
	a.Top = b.Top;
	a.Front = b.Front;
	a.Right = b.Right;
	a.Left = b.Left;
	a.Back = b.Back;
	a.Bottom = b.Bottom;
}

int main()
{
	Dice d1, d2;	
	char c;
	for (int i = 0; i < 6; i++)
	{
		if (i == 0) cin >> d1.Top;
		if (i == 1) cin >> d1.Front;
		if (i == 2) cin >> d1.Right;
		if (i == 3) cin >> d1.Left;
		if (i == 4) cin >> d1.Back;
		if (i == 5) cin >> d1.Bottom;
	}
	copy(d2, d1);
	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
			case 'S': d2.Top = d1.Back; 
					  d2.Front = d1.Top;
					  d2.Back = d1.Bottom;
					  d2.Bottom = d1.Front;
					  break;
			case 'N': d2.Top = d1.Front;
					  d2.Front = d1.Bottom;
					  d2.Back = d1.Top;
					  d2.Bottom = d1.Back;
					  break;
			case 'E': d2.Top = d1.Left;
					  d2.Right = d1.Top;
					  d2.Left = d1.Bottom;
					  d2.Bottom = d1.Right;
					  break;
			case 'W': d2.Top = d1.Right;
					  d2.Right = d1.Bottom;
					  d2.Left = d1.Top;
					  d2.Bottom = d1.Left;
					  break;
		}
		copy(d1,d2);
	}
	cout << d1.Top << endl;
	return 0;
}

