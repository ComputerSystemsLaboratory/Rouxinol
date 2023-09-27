#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	int area, circum;
	cin >> a >> b;

	area = a * b;
	circum = (a + b) * 2;

	cout << area << " " << circum << endl;
	
}