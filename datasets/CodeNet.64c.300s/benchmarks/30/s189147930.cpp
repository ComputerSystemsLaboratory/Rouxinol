#include<iostream>
using namespace std;

int main() 
{
	while (1) {
		int a;
		cin >> a;
		if (a == 0)break;
		int b = 1000 - a;
		int c = 0;
		c += b / 500;
		b -= b / 500 * 500;
		c += b / 100;
		b -= b / 100 * 100;
		c += b / 50;
		b -= b / 50 * 50;
		c += b / 10;
		b -= b / 10 * 10;
		c += b / 5;
		b -= b / 5 * 5;
		c += b;
		cout << c << endl;
	}
}