#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	int a, b;

	while (cin >> a >> b, cin.eof() != true){
		cout << gcd(a, b) << " " << a / gcd(a, b) * b << endl;
	}

	return (0);
}

int gcd(int a, int b)
{
	if (b == 0){
		return (a);
	}
	else {
		return (gcd(b, a % b));
	}
}