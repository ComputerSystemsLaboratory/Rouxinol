#include<iostream>
#include<queue>
using namespace std;

priority_queue<int> S;
int main()
{
	int k;
	string str;

	while (true)
	{
		cin >> str;
		if (str == "insert")
		{
			cin >> k;
			S.push(k);
		}
		else if (str == "extract")
		{
			cout << S.top() << endl;
			S.pop();
		}
		else if (str == "end") break;
	}

	return 0;
}