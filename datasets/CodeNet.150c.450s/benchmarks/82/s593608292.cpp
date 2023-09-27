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

	void ComRot()
	{
		int		front = DV[eFront];

		DV[eFront] = DV[eRight];
		DV[eRight] = DV[eBack];
		DV[eBack] = DV[eLeft];
		DV[eLeft] = front;
	}

	int		GetDV(FACE face)
	{
		return (DV[face]);
	}

	void	SearchTop(int t)
	{
		for (int i = 0; i < 4; i++)
		{
			if (t == DV[eTop])
			{
				return;
			}
			ComN();
		}

		for (int i = 0; i < 4; i++)
		{
			if (t == DV[eTop])
			{
				return;
			}
			ComE();
		}
	}

	void	SearchFront(int f)
	{
		for (int i = 0; i < 4; i++)
		{
			if (f == DV[eFront])
			{
				return;
			}
			ComRot();
		}
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
	int		q;
	cin >> q;
	cin.ignore();

	for (int i = 0; i < q; i++)
	{
		int		t, f;

		cin >> t >> f;
		cin.ignore();
		d.SearchTop(t);
		d.SearchFront(f);

		cout << d.GetDV(Dice::eRight) << "\n";
	}

	return 0;
}