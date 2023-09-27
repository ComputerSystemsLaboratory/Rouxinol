#include <iostream>

using namespace std;

int coin;

int main()
{
	int money = 1;
	int remoney;
	
	
	while (1){
	cin >> money;
	if (money == 0) break;
	remoney = 1000 - money;
	
	if ( remoney >= 500){
		coin++;
		remoney -= 500;
	}
	coin += remoney / 100;
	remoney %= 100;
	
	coin += remoney / 50;
	remoney %= 50;
	
	coin += remoney / 10;
	remoney %= 10;
	
	coin += remoney / 5;
	remoney %= 5;
	
	coin += remoney;
	
	cout << coin << endl;
	coin = 0;
	}
	return (0);
}