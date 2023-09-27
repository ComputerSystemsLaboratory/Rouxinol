#include<iostream>
using namespace std;

struct Directions
{
	int E[6] = { 2, 1, 5, 0, 4, 3 };
	int W[6] = { 3, 1, 0, 5, 4, 2 };
	int N[6] = { 4, 0, 2, 3, 5, 1 };
	int S[6] = { 1, 5, 2, 3, 0, 4 };
};

class Dice
{
private:
	int num[6];
	char dir_command[105];
	Directions dir_array;
	void swap(int*);
public:
	Dice();
	int condition(int);
	void roll(int);
	void show_top();
	void show_member();
};

Dice::Dice()
{
	Directions direction;
	for (int i = 0; i < 6; i++)
		cin >> this->num[i];
	cin >> this->dir_command;
}

int Dice::condition(int i)
{
	if (dir_command[i] == '\0')
		return 0;
	else
		return 1;
}

void Dice::roll(int i)
{
	switch (this->dir_command[i])
	{
	case 'E':
		this->swap(dir_array.E);
		break;
	case 'W':
		this->swap(dir_array.W);
		break;
	case 'N':
		this->swap(dir_array.N);
		break;
	case 'S':
		this->swap(dir_array.S);
		break;
	}
	return;
}

void Dice::swap(int *dir)
{
	int tmp[6];
	for (int i = 0; i < 6; i++)
		tmp[dir[i]] = num[i];
	for (int i = 0; i < 6; i++)
		num[i] = tmp[i];
	return;
}

void Dice::show_top()
{
	cout << this->num[0] << endl;
	return;
}

int main()
{
	int a;
	Dice dice;

	for (int i = 0; dice.condition(i); i++)
	{
		dice.roll(i);
	}
	dice.show_top();

	return 0;
}
