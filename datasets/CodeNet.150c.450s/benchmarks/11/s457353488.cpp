#include <iostream>
using namespace std;

int charToIdx(const char &c)
{
	switch(c)
	{
	case 'S':
		return 0;
	case 'H':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 3;
	}
}

int main()
{
	const int CARD_NUM = 14;
	int n = 0;
	cin >> n;

	bool check[4][14] = {false};
	char c = 0;
	int num = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> c >> num;
		check[charToIdx(c)][num] = true;
	}
	char str[] = {'S', 'H', 'C', 'D'};
	for(int i = 0; i < 4; i++)
	{
		for(int j = 1; j < 14; j++)
		{
			if(!check[i][j])
			{ 
				cout << str[i] << " " << j << endl;
			}
		}
	}
	return 0;
}