#include "iostream"
#include<stdio.h>
using namespace std;

int main()
{
	int a, b, c,d;
	while (1)
	{
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)break;
		d = a + b; if (a == -1 || b == -1 || d < 30) {
			cout << 'F' << endl;
		}
		else {
			if (d >= 80)cout << 'A' << endl;
			if (80 > d &&d>= 65)cout << 'B' << endl;
			if (65 > d&&d >= 50)cout << 'C' << endl;
			if (50 > d &&d >= 30 && c < 50)cout << 'D' << endl;
			if (50 > d &&d >= 30 && c >= 50) { cout << 'C' << endl; }

		}
	}
	return 0;
}