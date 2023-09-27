#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	stack<int> car;
	vector<int> outlist;
	int carnum;

	while( cin >> carnum )
	{
		if(carnum)
		{
			car.push(carnum);
		}
		else
		{
			outlist.push_back(car.top());
			car.pop();
		}
	}

	for(size_t i=0; i<outlist.size(); ++i)
	{
		cout << outlist[i] << '\n';
	}
}