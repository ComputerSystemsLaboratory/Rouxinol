#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	while(1)
	{
		int num, action;
		cin>>num>>action;
		if(num == 0 && action == 0)
			break;

		vector<int> cards(num);
		for(int i= 0; i < num; i++)
			cards[i]= num-i;

		for(int i= 0; i < action; i++)
		{
			int startc, numc;
			cin>>startc>>numc;
			vector<int> res(num);

			for(int j= 0; j < numc; j++)
				res[j]= cards[startc-1+j];
			for(int j= 0; j < startc-1; j++)
				res[numc+j]= cards[j];
			for(int j= startc+numc-1; j < num; j++)
				res[j]= cards[j];
			for(int j= 0; j < num; j++)
				cards[j]= res[j];
		}
		cout<<cards[0]<<endl;
	}
}