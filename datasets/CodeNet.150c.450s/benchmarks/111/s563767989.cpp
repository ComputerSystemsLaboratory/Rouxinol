#include <iostream>
#include <vector>
using namespace std;


int main()
{
	long long int table[21][120] = {0};
	int number[120];
	int n;


	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> number[i];
	}


	table[number[0]][0] = 1;


	for (int now = 0; now < n - 2; ++now)
	{
		for (int sum = 0; sum < 21; ++sum)
		{
				if (sum + number[now + 1] <= 20) table[sum + number[now + 1]][now + 1] += table[sum][now];
				if (sum - number[now + 1] >= 0)  table[sum - number[now + 1]][now + 1] += table[sum][now];
		}
	}


	cout << table[number[n - 1]][n - 2] << endl;


	return 0;
}