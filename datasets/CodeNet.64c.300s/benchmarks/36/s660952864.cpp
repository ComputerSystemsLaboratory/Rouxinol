#include<iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	if (a > b) swap(b, a);
	else if (b > c) swap(c, b);
        if (a > b) swap(b, a);
	else if (b > c) swap(c, b);
	if (a > b) swap(b, a);
	else if (b > c) swap(c, b);
	
	cout << a << " " << b << " " << c << endl;
}