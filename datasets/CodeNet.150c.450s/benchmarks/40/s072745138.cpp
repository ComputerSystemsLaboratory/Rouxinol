#include <iostream>
#include <string>

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
		eBottom,
		eFACEMax
	};

	Dice(int v[6])
	{
		for (int i = eTop; i < eFACEMax; i++)
		{
			DV[i] = v[i];
		}
	}

	void ComE()
	{
		int		top = DV[eTop];

		DV[eTop] = DV[eLeft];
		DV[eLeft] = DV[eBottom];
		DV[eBottom] = DV[eRight];
		DV[eRight] = top;
	}

	void ComW()
	{
		int		top = DV[eTop];

		DV[eTop] = DV[eRight];
		DV[eRight] = DV[eBottom];
		DV[eBottom] = DV[eLeft];
		DV[eLeft] = top;
	}

	void ComN()
	{
		int		top = DV[eTop];

		DV[eTop] = DV[eFront];
		DV[eFront] = DV[eBottom];
		DV[eBottom] = DV[eBack];
		DV[eBack] = top;
	}

	void ComS()
	{
		int		top = DV[eTop];

		DV[eTop] = DV[eBack];
		DV[eBack] = DV[eBottom];
		DV[eBottom] = DV[eFront];
		DV[eFront] = top;
	}

	int		GetDV(FACE face)
	{
		return (DV[face]);
	}

private:
	int		DV[eFACEMax];
};

int main()
{
	int v[Dice::eFACEMax];

	cin >> v[Dice::eTop] >> v[Dice::eFront] >> v[Dice::eRight] >> v[Dice::eLeft]>> v[Dice::eBack] >> v[Dice::eBottom];
	cin.ignore();

	Dice	d(v);
	string	str;

	getline(cin, str);
	for (auto it : str)
	{
		switch (it)
		{
		case 'S':
		case 's':
			d.ComS();
			break;
		case 'N':
		case 'n':
			d.ComN();
			break;
		case 'E':
		case 'e':
			d.ComE();
			break;
		case 'W':
		case 'w':
			d.ComW();
			break;
		default:
			break;
		}
	}

	cout << d.GetDV(Dice::eTop) << "\n";

	return 0;
}