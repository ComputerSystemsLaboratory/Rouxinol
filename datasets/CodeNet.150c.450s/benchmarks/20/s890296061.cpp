#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cin >> x ;

	y = x / 3600;

	cout << y  << ":";
	y = (x % 3600) / 60;
	cout << y << ":" << x % 60 << endl;
	return 0;
}