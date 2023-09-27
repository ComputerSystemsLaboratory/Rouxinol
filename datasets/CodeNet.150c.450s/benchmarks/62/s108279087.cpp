#include<iostream>
using namespace std;

void message(int, int, int);

int main() {
	int a, b, c;
	
	cin >> a >> b >> c;

	if (a < b) 
	{
		if (b < c)	message(a, b, c);
		else
		{
			if (a < c)	message(a, c, b);
			else message(c, a, b);
		}
	}
	else
	{
		if (a < c)	message(b, a, c);
		else
		{
			if (b < c)	message(b, c, a);
			else message(c, b, a);
		}
	}

	return 0;

}

void message(int x, int y, int z) {
	cout << x << " " << y << " " << z << endl;
}