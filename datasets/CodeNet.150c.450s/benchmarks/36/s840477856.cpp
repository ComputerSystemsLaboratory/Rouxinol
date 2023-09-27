#include <iostream>
using namespace std;

int main()
{
	int d, S;

	while (cin >> d)
	{
		S = 0;
		if (cin.eof()) return 0;
		for (int i = 1; i < 600 / d; i++)
		{
			S += i * d * i * d * d;
		}
		cout << S << endl;
	}
	return 0;
}