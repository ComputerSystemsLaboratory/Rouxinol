#include <iostream>

using namespace std;

int main()
{
	int a, b, area, periphery;

	cin >> a;
	cin >> b;

	area = a*b;
	periphery = ( a*2 ) + ( b*2 );

	cout << area << " " << periphery << endl;

	return 0;
}