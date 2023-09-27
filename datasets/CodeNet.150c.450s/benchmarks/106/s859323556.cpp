#include<iostream>
using namespace std;
int main(){
	int a, b, c,x,y;

	cin >> a   >> b  >> c;

	y = 0;
	for (int p = a; p <= b; p++)

	{
		x = c%p;

		if (x == 0)
		{
			
			y = y + 1;
		}


	}

	cout << y << endl;

	return 0;
}