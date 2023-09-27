#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	priority_queue<int> PQ;
	string com;
	int n;
	
	while(cin >> com)
	{
		if(com == "end")
		{
			break;
		}
		if(com[0] == 'i')
		{
			cin >> n;
			PQ.push(n);
		}
		else if(com[0] == 'e')
		{
			cout << PQ.top() << endl;
			PQ.pop();
		}
	}
	
	return 0;
} 
