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
public:
	int num[6];
	char dir_command[105];
	void swap(int*);
	Directions dir_array;
	Dice();
	int condition(int);
	void roll(int);
	void show_num(int);
};

Dice::Dice()
{
	Directions direction;
	for (int i = 0; i < 6; i++)
		cin >> this->num[i];
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

void Dice::show_num(int i)
{
	cout << this->num[i] << endl;
	return;
}

int main()
{
	int q, t, f;
	Dice dice;
	int a[6][4] = { {1, 2, 4, 3},
	{0, 3, 5, 2},
	{0, 1, 5, 4},
	{0, 4, 5, 1},
	{0, 2, 5, 3},
	{3, 4, 2, 1} };

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> t; cin >> f;
		for (int j = 0; j < 6; j++)
			if (t == dice.num[j])
				t = j;
			else if (f == dice.num[j])
				f = j;
		for (int j = 0; j < 4; j++)
			if (a[t][j] == f)
				dice.show_num(a[t][(j + 1) % 4]);
	}

	return 0;
}
