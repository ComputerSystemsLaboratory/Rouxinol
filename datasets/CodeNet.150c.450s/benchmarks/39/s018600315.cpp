#include <iostream>

using namespace std;

int main()
{
	long long a,b,c;
	
	cin >> a >> b;
	c =  a * b;
	a = 2 * (a + b);
	cout << c << " " << a << endl;
}