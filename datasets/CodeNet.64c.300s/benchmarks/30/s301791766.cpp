
#include <iostream>
using namespace std;

int minChange(int money)
{
	int coin[6]={500, 100, 50, 10, 5, 1};
	int n=0;
	while(money > 0)
	{
		for(int i=0; i<6; i++)
		{
			if(money >= coin[i])
			{
				money -= coin[i];
				n++;
				break;
			}
		}
	}
	return n;
}

int main(void)
{
	int money;
	while(1)
	{
		cin >> money;
		if(money == 0)return 0;

		cout << minChange(1000-money) << endl;
	}
	return 0;
}