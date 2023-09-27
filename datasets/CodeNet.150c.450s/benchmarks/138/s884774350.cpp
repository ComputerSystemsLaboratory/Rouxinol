#include <iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}

int gcd(int a, int b){
	if (b != 0) return (gcd(b, a % b));
	else return (a);
}