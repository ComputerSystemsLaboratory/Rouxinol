#include <iostream>

using namespace std;

const int speY = 200;
const int ordY = 195;

const int bigM = 20;
const int smlM = 19;

const int Y3 = speY + ordY * 2;

int calcDay(int Y, int M, int D)
{
	int day = 0;

	day += Y3 * ((Y - 1) / 3);
	day += ordY * ((Y - 1) % 3);

	if (Y % 3)
		day += (M - 1) / 2 * (bigM+smlM) + ((M - 1) % 2) * bigM;
	else
		day += (M - 1) * bigM;

	return day + D;
}

int main()
{
	int mDay = calcDay(1000, 1, 1);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int Y, M, D;
		cin >> Y >> M >> D;

		cout << calcDay(1000, 1, 1) - calcDay(Y, M, D) << endl;
	}
}