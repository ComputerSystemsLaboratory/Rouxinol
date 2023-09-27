#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	int c = a%b;
	if (c == 0) return b;
	else return gcd(b, c);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	//system("pause");
	return 0;
}
