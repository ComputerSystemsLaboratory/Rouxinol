#include <iostream>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

class Dice
{
public:
	enum FACE
	{
		eTop = 0,
		eFront,
		eRight,
		eLeft,
		eBack,
		eBottom
	};

	Dice()
	{
	}

	Dice(bool isSetNumber)
	{
		if (isSetNumber)
		{
			SetDiceNumber();
		}
	}

	virtual ~Dice()
	{
	}

	void SetDiceNumber()
	{
		dqDiceNumber.resize(6);
		cin >> dqDiceNumber[eTop];
		cin >> dqDiceNumber[eFront];
		cin >> dqDiceNumber[eRight];
		cin >> dqDiceNumber[eLeft];
		cin >> dqDiceNumber[eBack];
		cin >> dqDiceNumber[eBottom];

		cin.clear();
		cin.ignore();
	}

	void OrderE()
	{
		deque<FACE>		Rotation{ eTop, eLeft, eBottom, eRight };

		OrderExecute(Rotation);
	}

	void OrderW()
	{
		deque<FACE>		Rotation{ eTop, eRight, eBottom, eLeft };

		OrderExecute(Rotation);
	}

	void OrderN()
	{
		deque<FACE>		Rotation{ eTop, eFront, eBottom, eBack };

		OrderExecute(Rotation);
	}

	void OrderS()
	{
		deque<FACE>		Rotation{ eTop, eBack, eBottom, eFront };

		OrderExecute(Rotation);
	}

	void OrderRotation()
	{
		deque<FACE>		Rotation{ eFront, eRight, eBack, eLeft };

		OrderExecute(Rotation);
	}

	int		GetDiceNumber(FACE face)
	{
		return (dqDiceNumber[face]);
	}

	void	SearchTop(int t)
	{
		for (int i = 0; i < 4; i++)
		{
			if (t == dqDiceNumber[eTop])
			{
				return;
			}
			OrderN();
		}

		for (int i = 0; i < 4; i++)
		{
			if (t == dqDiceNumber[eTop])
			{
				return;
			}
			OrderE();
		}
	}

	void	SearchFront(int f)
	{
		for (int i = 0; i < 4; i++)
		{
			if (f == dqDiceNumber[eFront])
			{
				return;
			}
			OrderRotation();
		}
	}

private:
	deque<size_t>	dqDiceNumber;

	void OrderExecute(const deque<FACE> &Rotation)
	{
		auto	temp = dqDiceNumber[Rotation[0]];
		auto	LoopMax = Rotation.size() - 1;

		for (auto i = 0u; i < LoopMax; i++)
		{
			dqDiceNumber[Rotation[i]] = dqDiceNumber[Rotation[i + 1]];
		}
		dqDiceNumber[Rotation[LoopMax]] = temp;
	}
};

void DiceI();

int main()
{
	DiceI();

	return 0;
}

void DiceI()
{
	Dice	d(true);

	string	str;

	getline(cin, str);
	for (auto it : str)
	{
		switch (toupper(it))
		{
		case 'S':
			d.OrderS();
			break;
		case 'N':
			d.OrderN();
			break;
		case 'E':
			d.OrderE();
			break;
		case 'W':
			d.OrderW();
			break;
		default:
			break;
		}
	}

	cout << d.GetDiceNumber(Dice::eTop) << "\n";
}