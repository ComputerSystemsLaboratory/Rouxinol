#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if (b > a && b > c) swap(c, b);
	
	if (a > c && a > b) swap(a, c);
	
	if (a > b) swap(a, b);
	
	cout << a << " " << b << " " << c;
	
	cout << endl;
	return 0;
}
