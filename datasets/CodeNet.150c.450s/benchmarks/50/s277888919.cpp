#include <iostream>
#include <cstdio>
#include <string>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int price;
	int change;
	int num;		//おつりの枚数
	
	while (1)
	{
		cin >> price;
		if (price == 0) break;
		change = 1000 - price;
		num = 0;
		num += change / 500;
		change %= 500;
		num += change / 100;
		change %= 100;
		num += change / 50;
		change %= 50;
		num += change / 10;
		change %= 10;
		num += change / 5;
		change %= 5;
		num += change / 1;
		cout << num << endl;
	}
	
	return 0;
}