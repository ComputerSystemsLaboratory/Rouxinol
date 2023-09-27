#include <iostream>
using namespace std;

int w, h, x, y, r;
int Hor(int W, int X, int R)
{
	if (X - R >= 0 && X + R <= W)
		return 1;
	else
		return 0;
}

int Ver(int H, int Y, int R)
{
	if (Y - R >= 0 && Y + R <= H)
		return 1;
	else
		return 0;
}

int main()
{
	cin >> w >> h >> x >> y >> r;
	if (Hor(w, x, r)*Ver(h, y, r) == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}