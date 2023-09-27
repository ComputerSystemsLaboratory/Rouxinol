#include <iostream>
#include <stack>

using namespace std;

void solve()
{
	stack<int> Stack;
	int num;
	while(cin >> num)
	{
		if(num == 0)
		{
			cout << Stack.top() << endl;
			Stack.pop();
		}
		else
		{
			Stack.push(num);
		}
	}
}

int main()
{
	solve();
	return(0);
}