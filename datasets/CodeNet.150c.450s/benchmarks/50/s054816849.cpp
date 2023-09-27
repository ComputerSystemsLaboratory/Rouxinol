#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <deque>
using namespace std;

int main()
{
	int money[100],pay[100],count[100] = {0},i = 0;

	while(1)
	{
		cin>>pay[i];
		if(pay[i] == 0)break;
		money[i] = 1000 - pay[i];

		while(money[i] >= 1)
		{
			if(money[i] >= 500)
			{
				money[i] -= 500;
				count[i]++;
			}
			else if(money[i] >= 100)
			{
				money[i] -= 100;
				count[i]++;
			}
			else if(money[i] >= 50)
			{
				money[i] -= 50;
				count[i]++;
			}
			else if(money[i] >= 10)
			{
				money[i] -= 10;
				count[i]++;
			}
			else if(money[i] >= 5)
			{
				money[i] -= 5;
				count[i]++;
			}
			else if(money[i] >= 1)
			{
				money[i] -= 1;
				count[i]++;
			}
		}
	i++;
	}
	for(int j=0; j<i; j++)
		cout<<count[j]<<endl;

	return 0;

}