#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int pay;
	int change;
	int coin;
	while (cin >> pay)
	{
		if(pay == 0) break;
		coin = 0;
		change = 1000 - pay;
		while (change >= 500)
		{
			coin++;
			change -= 500;
		}
		while (change >= 100)
		{
			coin++;
			change -= 100;
		}
		while (change >= 50)
		{
			coin++;
			change -= 50;
		}
		while (change >= 10)
		{
			coin++;
			change -= 10;
		}
		while (change >= 5)
		{
			coin++;
			change -= 5;
		}
		while (change >= 1)
		{
			coin++;
			change -= 1;
		}
		cout << coin << endl;
	}

	return 0;
}