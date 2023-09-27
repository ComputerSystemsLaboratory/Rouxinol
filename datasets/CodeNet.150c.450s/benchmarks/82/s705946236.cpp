#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

const int COUNT = 6;


class Dice
{
private:
	int num[6];

public:
	Dice();
	void play_dice(string);
	void play(int, int, int, int);
	void print_(int x) {printf("%d\n", num[x]);}
	void to_top_and_front(int, int);
};

Dice::Dice()
{
	for (int i = 0; i < COUNT; ++i)
	{
		cin >> num[i];
		
	}
}


void Dice::play_dice(string s)
{
	if(s == "E") {play(0, 2, 5, 3); }
		
	if(s == "N") {play(0, 4, 5, 1); }
		
	if(s == "S") {play(0, 1, 5, 4); }
	
	if(s == "W") {play(0, 3, 5, 2); }
}

void Dice::play(int a, int b, int c, int d)
{
	int temp;
	temp = num[d]; num[d] = num[c]; num[c] = num[b]; num[b] = num[a]; num[a] = temp;
}


void Dice::to_top_and_front(int top, int front)
{
	string str[7] = {"N", "N", "N", "W", "N", "N", "N"};
	for (int i = 0; i < 7; ++i)
	{
		if(front == num[1]) break;
		play_dice(str[i]);
	}
	while(top != num[0])
	{
		play_dice("W");
	}
}


int main(int argc, char const *argv[])
{
	Dice c;
	int count = 0;
	cin >> count;
	int top = 0, front = 0;
	
	for (int i = 0; i < count; ++i)
	{
		cin >> top >> front;
		c.to_top_and_front(top, front);
		c.print_(2);
	}

	return 0;
}