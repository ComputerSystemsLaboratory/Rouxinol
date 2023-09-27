#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x;

	while (1)
	{
		int all = 0;


		cin >> x;

		if (x == "0") return 0;

		for (int i = 0; i < x.length(); i++)
		{
			all += x[i] - '0';
		}
		cout << all << "\n";

	}
	return 0;
}
