#include<iostream>
#include<fstream>
using namespace std;

int main()
{


	int a, b, c;
	int count = 0;
	cin >> a >> b >> c;

	for (int div = a; div <= b; div++)
	{
		if (!(c%div))
			count++;
	}

	cout << count << endl;

	return 0;
}