#include <iostream>
#define TOU 4
#define KAI 3
#define GOUSHITSU 10
using namespace std;

struct kousya
{
	int ninzu;
};


int main()
{
	struct kousya nyukyo[TOU][KAI][GOUSHITSU];
	for (int t = 0; t < TOU; t++)
	{
		for (int k = 0; k < KAI; k++)
		{
			for (int g = 0; g < GOUSHITSU; g++)
			{
				nyukyo[t][k][g].ninzu = 0;
			}
		}
	}

	int count;
	cin >> count;

	int b, f, r, v;
	for (int i = 0; i < count; i++)
	{
		cin >> b >> f >> r >> v;
		for (int t = 0; t < TOU; t++)
		{
			for (int k = 0; k < KAI; k++)
			{
				for (int g = 0; g < GOUSHITSU; g++)
				{
					if (b==t+1 && f==k+1 && r==g+1)
					{
						nyukyo[t][k][g].ninzu = nyukyo[t][k][g].ninzu + v;
					}
				}
			}
		}
	}

	for (int t = 0; t < TOU; t++)
	{
		for (int k = 0; k < KAI; k++)
		{
			for (int g = 0; g < GOUSHITSU; g++)
			{
				cout << ' ' << nyukyo[t][k][g].ninzu;
			}
			cout << endl;
		}
		if (t != 3)
		{
			cout << "####################" << endl;
		}
	}
	return 0;
}