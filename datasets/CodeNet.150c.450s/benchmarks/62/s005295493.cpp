#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int a, b, c;
	int i;

	cin >> a >> b >> c;


	if (a > b)
	{
		a ^= b ^= a ^= b;
	}


	if (b > c)
	{
		b ^= c ^= b ^= c;

	}
	if (a > b)
	{
		a ^= b ^= a ^= b;
	}



	cout << a << " " << b << " " << c << endl;



	return 0;
}