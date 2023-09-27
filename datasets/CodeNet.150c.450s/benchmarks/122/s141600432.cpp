#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	priority_queue<int>qu;
	string p = "";
	int x;

	while (p != "end")
	{
		cin >> p;
		if (p == "insert")
		{
			cin >> x;
			qu.push(x);
		}
		if (p == "extract")
		{
			cout << qu.top() << endl;
			qu.pop();
		}
	}

	return 0;
}
