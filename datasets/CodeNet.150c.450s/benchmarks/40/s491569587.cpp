#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

const int COUNT = 6;

#define size_array(x) ((sizeof(x)) / (sizeof(x[0])

class Dice
{
private:
	int num[6];

public:
	Dice();
	void play_dice(string);
	void play(int, int, int, int);
	void print_() {printf("%d\n", num[0]);}
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


int main(int argc, char const *argv[])
{
	Dice c;
	string cmd;
	cin >> cmd;
	for (int i = 0; i < (int)cmd.size(); ++i)
	{
		c.play_dice(cmd.substr(i, 1));
	}
	c.print_();
	return 0;
}