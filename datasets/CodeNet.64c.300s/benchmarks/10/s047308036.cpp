#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	int a, b;
	int mid;
	cin >> a >> b;
	while (!(a == 0 && b == 0))
	{
		if (a > b)
		{
			mid = a;
			a = b;
			b = mid;
		}


		cout << a << " " << b << endl;

		cin >> a >> b;

	}


	return 0;
}