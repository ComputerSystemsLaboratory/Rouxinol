#include <iostream>
#include <stdio.h>
#include <math.h>

#define DICE_SIZE 6

class Dice
{
private:
	int eyes[DICE_SIZE];
public:
	Dice(int e1, int e2, int e3, int e4, int e5, int e6)
	{
		eyes[0] = e1;
		eyes[1] = e2;
		eyes[2] = e3;
		eyes[3] = e4;
		eyes[4] = e5;
		eyes[5] = e6;
	}

	int GetEye(int i)
	{
		return eyes[i];
	}

	void Roll(char c)
	{
		switch (c)
		{
		case 'E':
		case 'e':
			ToEest();
			break;

		case 'N':
		case 'n':
			ToNorth();
			break;

		case 'S':
		case 's':
			ToSouth();
			break;

		case 'W':
		case 'w':
			ToWest();
			break;

		default:
			break;
		}
	}

	void ToEest()
	{
		int temp[DICE_SIZE];
		for (int i = 0; i < DICE_SIZE; i++) temp[i] = eyes[i];
		eyes[0] = temp[3];
		eyes[1] = temp[1];
		eyes[2] = temp[0];
		eyes[3] = temp[5];
		eyes[4] = temp[4];
		eyes[5] = temp[2];
	}

	void ToNorth()
	{
		int temp[DICE_SIZE];
		for (int i = 0; i < DICE_SIZE; i++) temp[i] = eyes[i];
		eyes[0] = temp[1];
		eyes[1] = temp[5];
		eyes[2] = temp[2];
		eyes[3] = temp[3];
		eyes[4] = temp[0];
		eyes[5] = temp[4];
	}

	void ToSouth()
	{
		int temp[DICE_SIZE];
		for (int i = 0; i < DICE_SIZE; i++) temp[i] = eyes[i];
		eyes[0] = temp[4];
		eyes[1] = temp[0];
		eyes[2] = temp[2];
		eyes[3] = temp[3];
		eyes[4] = temp[5];
		eyes[5] = temp[1];
	}
	
	void ToWest()
	{
		int temp[DICE_SIZE];
		for (int i = 0; i < DICE_SIZE; i++) temp[i] = eyes[i];
		eyes[0] = temp[2];
		eyes[1] = temp[1];
		eyes[2] = temp[5];
		eyes[3] = temp[0];
		eyes[4] = temp[4];
		eyes[5] = temp[3];
	}

	void TurnClockWise()
	{
		int temp[DICE_SIZE];
		for (int i = 0; i < DICE_SIZE; i++) temp[i] = eyes[i];
		eyes[0] = temp[0];
		eyes[1] = temp[2];
		eyes[2] = temp[4];
		eyes[3] = temp[1];
		eyes[4] = temp[3];
		eyes[5] = temp[5];
	}
};

int main()
{
	int e1, e2, e3, e4, e5, e6;
	scanf("%d %d %d %d %d %d", &e1, &e2, &e3, &e4, &e5, &e6);
	Dice dice(e1, e2, e3, e4, e5, e6);

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		// 上面を合わせる
		for (int i = 0; i < 4; i++)
		{
			if(dice.GetEye(0)==a) break;
			dice.Roll('N');
		}
		if (dice.GetEye(0)!= a)
		{
			for (int i = 0; i < 4; i++)
			{
				if (dice.GetEye(0) == a) break;
				dice.Roll('E');
			}
		}

		// 前面を合わせる
		for (int i = 0; i < 4; i++)
		{
			if (dice.GetEye(1) == b) break;
			dice.TurnClockWise();
		}

		std::cout << dice.GetEye(2) << std::endl;
	}

}
