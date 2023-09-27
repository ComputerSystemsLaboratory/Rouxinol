
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void)
{
	int n;
	stack<int> in;
	queue<int> out;

	while(cin >> n)
	{
		if(n == 0)
		{
			out.push(in.top());
			in.pop();
		}
		else
			in.push(n);
	}

	while(!out.empty())
	{
		cout << out.front() << endl;
		out.pop(); 
	}

	return 0;
}