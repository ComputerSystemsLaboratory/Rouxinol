#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> garage;
	vector<int> outgoing;
	int data;
	int train;
	while(cin>>train)
	{
		if(0==train)
		{
			outgoing.push_back(garage.back());
			garage.pop_back();
		}
		else
		{
			garage.push_back(train);
		}
	}
	for(int i=0;i<outgoing.size();++i)
	{
		cout<<outgoing[i]<<endl;
	}
}