#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

class Dice
{
public:
	int top;	// ?????¢
	int south;	// ?????¢
	int east;	// ??±??¢
	int west;	// ?\???¢
	int north;	// ?????¢
	int bottom;	// ?????¢
	int tmp;	// ?????¢????????????????????¨
	void rotation(char ope);
};

void Dice::rotation(char ope)
{
	switch(ope)
	{
		case 'E':
			tmp = top;
			top = west;
			west = bottom;
			bottom = east;
			east = tmp;			
			break;
		case 'W':
			tmp = top;
			top = east;
			east = bottom;
			bottom = west;
			west = tmp;
			break;
		case 'S':
			tmp = top;
			top = north;
			north = bottom;
			bottom = south;
			south = tmp;
			break;
		case 'N':
			tmp = top;
			top = south;
			south = bottom;
			bottom = north;
			north = tmp;
			break;
	}
}

int main()
{
	Dice dice1;
	string ope;
	cin >> dice1.top >> dice1.south >> dice1.east >> dice1.west >> dice1.north >> dice1.bottom;
	
	//???????????¢??????????????\???
	cin >> ope;
	
	for(int i = 0; i < ope.length(); i++)
	{
		dice1.rotation(ope[i]);
	}
	
	cout << dice1.top << endl;
}