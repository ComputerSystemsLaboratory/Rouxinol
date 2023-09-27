#include <string>
#include <iostream>

using namespace std;

class Dice
{
public:
	static const int SURFACE_NUM = 6;
	static const int DIR_NUM = 4;
	static const int ROUND_NUM = 4;
	enum DIR { N, W, S, E };
private:
	static const int rotate_table[DIR_NUM][ROUND_NUM];
	int surface_numbers[SURFACE_NUM];

public:
	Dice(int number[SURFACE_NUM])
	{
		for (int i = 0; i < SURFACE_NUM; i++)
			surface_numbers[i] = number[i];
	}
	void rotate(DIR direction)
	{
		int backup = surface_numbers[0];
		for (int i = 0; i < ROUND_NUM - 1; i++)
			surface_numbers[rotate_table[direction][i]] = surface_numbers[rotate_table[direction][i + 1]];
		surface_numbers[rotate_table[direction][ROUND_NUM - 1]] = backup;
	}
	int getTopNumber() { return surface_numbers[0]; }
};
const int Dice::rotate_table[DIR_NUM][ROUND_NUM]
{
	{ 0, 1, 5, 4 },
	{ 0, 2, 5, 3 },
	{ 0, 4, 5, 1 },
	{ 0, 3, 5, 2 }
};
int main()
{
	int nums[Dice::SURFACE_NUM] = { 0 };
	for (int i = 0; i < Dice::SURFACE_NUM; i++)
		cin >> nums[i];
	Dice dice(nums);
	string command;
	cin >> command;
	for (unsigned int i = 0; i < command.size(); i++) {
		switch (command.at(i))
		{
		case 'N':
			dice.rotate(Dice::N);
			break;
		case 'W':
			dice.rotate(Dice::W);
			break;
		case 'S':
			dice.rotate(Dice::S);
			break;
		case 'E':
			dice.rotate(Dice::E);
			break;
		}
	}
	cout << dice.getTopNumber() << endl;
	return 0;
}