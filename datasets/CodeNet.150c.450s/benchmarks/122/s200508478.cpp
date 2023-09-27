#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> PQ;
	int x;
	string com;
	
	while(1)
	{
		cin >> com;
		if(com=="insert")
		{
			cin >> x;
			PQ.push(x);
		}
		else if(com=="extract")
		{
			cout << PQ.top() << endl;
			PQ.pop();
		}
		else if(com=="end") break;
	}
	return 0;
}