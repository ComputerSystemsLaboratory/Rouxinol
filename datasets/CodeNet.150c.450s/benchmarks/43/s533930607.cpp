#include <iostream>

using namespace std;

int main()
{
	int N, A, B, X, Y;

	while (true)
	{
		cin >> N; A = 0; B = 0;

		if (N == 0) { break; }

		for (int i = 0; i < N; i++)
		{
			cin >> X >> Y;

			if (X > Y) { A += X + Y; }
			if (X < Y) { B += X + Y; }
			if (X == Y) { A += X; B += Y; }
		}

		cout << A << ' ' << B << endl;
	}

	return 0;
}