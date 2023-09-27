#include <iostream>
using namespace std;

struct dice {
	int top;
	int bottom;
	int north;
	int east;
	int south;
	int west;
};


class Dice {
	public:
		void init(int i, int j, int k, int l, int m, int n);
		void order(char order);
		void print_top();
	private:
		struct dice dice_s;
		void north();
		void east();
		void south();
		void west();
};

void Dice::init(int i, int j, int k, int l, int m, int n)
{
	dice_s.top = i;
	dice_s.bottom = n;
	dice_s.south = j;
	dice_s.east = k;
	dice_s.west = l;
	dice_s.north = m;

}

void Dice::order(char order)
{

		switch(order) {
			case 'E':
				east();
				break;
			case 'W':
				west();
				break;
			case 'N':
				north();
				break;
			case 'S':
				south();
				break;
			default:
				break;
		}

}

void Dice::east()
{
	int top = dice_s.top;
	int bottom = dice_s.bottom;
	int east = dice_s.east;
	int west = dice_s.west;

	dice_s.top = west;
	dice_s.bottom = east;
	dice_s.east = top;
	dice_s.west = bottom;


}
void Dice::west()
{
	int top = dice_s.top;
	int bottom = dice_s.bottom;
	int east = dice_s.east;
	int west = dice_s.west;

	dice_s.top = east;
	dice_s.bottom = west;
	dice_s.east = bottom;
	dice_s.west = top;


}
void Dice::north()
{
	
	int top = dice_s.top;
	int bottom = dice_s.bottom;
	int north = dice_s.north;
	int south = dice_s.south;

	dice_s.top = south;
	dice_s.bottom = north;
	dice_s.south = bottom;
	dice_s.north = top;

}
void Dice::south()
{
	int top = dice_s.top;
	int bottom = dice_s.bottom;
	int north = dice_s.north;
	int south = dice_s.south;

	dice_s.top = north;
	dice_s.bottom = south;
	dice_s.south = top;
	dice_s.north = bottom;

}

void Dice::print_top()
{
	cout << dice_s.top << '\n';

}


int main()
{
	class Dice dice1;
	int first,second,third,forth,fifth,sixth;
	char order;

	cin >> first >> second >> third >> forth >> fifth >> sixth;

	dice1.init(first, second, third, forth, fifth, sixth);

	while(cin >> order) {

		dice1.order(order);


	}
		dice1.print_top();


	return 0;
}
