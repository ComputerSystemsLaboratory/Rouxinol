#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

class Dice {
private:
	int surface [6];
	void next(int a, int b, int c, int d);


public:
	Dice(int surface[6]);
	Dice();
	void role(char dir);
	void set(int pos, int num);
	int get(int pos);
};

int main(void) {
	Dice dice;

	for (int i = 0; 6 > i; i++) {
		int buf;
		scanf("%d", &buf);
		dice.set(i, buf);
	}
	char order;
	while (scanf(" %c", &order) != EOF) {
		dice.role(order);
	}
	printf("%d\n", dice.get(0));
	return 0;
}

void Dice::next(int a, int b, int c, int d)
{
	swap(surface[c], surface[d]);
	swap(surface[b], surface[c]);
	swap(surface[a], surface[b]);
}

Dice::Dice(int surface[6])
{
	for (int i = 0; 6 > i; i++)
		Dice::surface[i] = surface[i];
}

Dice::Dice()
{
	for (int i = 0; 6 > i; i++) surface[i] = 0;
}

void Dice::role(char dir)
{
	switch (dir) {
	case 'W': next(0,3,5,2);  break;
	case 'E': next(0,2,5,3);  break;
	case 'N': next(0,4,5,1);  break;
	case 'S': next(0,1,5,4);  break;
	}
}

void Dice::set(int pos, int num)
{
	surface[pos] = num;
}

int Dice::get(int pos)
{
	return surface[pos];
}