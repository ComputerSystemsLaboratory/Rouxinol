#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int money = 0;

	int change = 0;



	while (1)
	{


		int count500 = 0;

		int count100 = 0;

		int count50 = 0;

		int count10 = 0;

		int count5 = 0;

		int count1 = 0;


		cin >> money;

		if (money == 0)break;


		change = 1000 - money;

		count500 = change / 500;

		count100 = (change - (count500 * 500)) / 100;

		count50 = (change - (count500 * 500) - (count100 * 100)) / 50;

		count10 = (change - (count500 * 500) - (count100 * 100) - (count50 * 50)) / 10;

		count5 = (change - (count500 * 500) - (count100 * 100) - (count50 * 50) - (count10 * 10)) / 5;

		count1 = (change - (count500 * 500) - (count100 * 100) - (count50 * 50) - (count10 * 10) - (count5 * 5)) / 1;

		cout << count500 + count100 + count50 + count10 + count5 + count1 << endl;
	}

	return 0;
}