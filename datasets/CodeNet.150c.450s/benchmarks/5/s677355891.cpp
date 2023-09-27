#include <stack>
#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	stack<int> a;

	for(int i = 0; i < n; i++)
	{
		int temp;

		cin >> temp;

		a.push(temp);
	}

	while(!a.empty())
	{
		cout << a.top();

		a.pop();

		if(!a.empty())
		{
			cout << ' ';
		}
	}

	cout << endl;

	return 0;
}