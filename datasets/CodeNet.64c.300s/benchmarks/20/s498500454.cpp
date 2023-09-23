#include <iostream>

using namespace std;

int Integral(int h, int d)
{
	if(h >= 600)	return 0;
	else		return (h*h*d) + Integral(h+d, d);

}
int main()
{
	int d;

	while (cin >> d)
	{
		cout << Integral(d, d) << endl;
	}

	return 0;
}