#include<iostream>
using namespace std;
int main()
{
	
	int x, y;
	
	while (true)
	{	

		cin >> x >> y;

		if (x == 0 && y == 0) break;
		if (x < y) cout << x << " " << y << endl;
		if (x > y) cout << y << " " << x << endl;
		if (x == y) cout << x << " " << y << endl;
	
	}

}