#include <iostream>

using namespace std;
int gcd(int a ,int b)
{
	if(a%b == 0) return b;
	else return gcd(b,a%b);
}

int main(int argc, char const *argv[])
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	cout << gcd(a,b) << endl;
	return 0;
}