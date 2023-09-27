#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
	priority_queue<int> queue;
	string command;
	int num;

	while(true)
	{
		cin >> command;
		if(command=="end")
		{
			break;
		}

		if(command=="extract")
		{
			cout << queue.top() << endl;
			queue.pop();
		}
		else
		{
			cin >> num;
			queue.push(num);
		}
	}
	return 0;
}