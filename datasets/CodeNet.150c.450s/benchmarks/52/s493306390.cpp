#include <iostream>
#include <stack>

using namespace std;

void solve()
{
	int n;
	stack<int> Stack;
	while(cin >> n)
	{
		if(n != 0)
		{
			Stack.push(n);
		}
		else
		{
			cout << Stack.top() << endl;;
			Stack.pop();
		}
	}
}

int main()
{
	solve();
	return(0);
}