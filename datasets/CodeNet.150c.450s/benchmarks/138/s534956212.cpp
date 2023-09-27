#include <iostream>
using namespace std;

int Mygcd(int x, int y);

int main()
{
	int a, b, temp;
	cin >> a >> b;
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}
	cout << Mygcd(a, b) << "\n";
	return 0;
}

int Mygcd(int x, int y)
{
	if (y == 0) return x;
	else return Mygcd(y, x%y);
}