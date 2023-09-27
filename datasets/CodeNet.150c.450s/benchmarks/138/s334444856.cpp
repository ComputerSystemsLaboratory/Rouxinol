#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int temp;
	cin >> x >> y;
	
	if (x < y){
		temp = x;
		x = y;
		y = temp;
	}

	while (x%y != 0){
		temp = x;
		x = y;
		y = temp % y;
	}

	cout << y << endl;

	return 0;
}