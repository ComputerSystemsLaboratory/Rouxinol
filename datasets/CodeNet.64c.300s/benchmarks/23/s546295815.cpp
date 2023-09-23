#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int menseki = 0;
	int shuu = 0;

	cin >> a;
	cin >> b;

	menseki = a * b;
	shuu = a * 2 + b * 2;

	cout << menseki << " " << shuu << endl;
	return 0;
}