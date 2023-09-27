#include <queue>
#include <iostream>
using namespace std;

int main()
{
	string oper;
	int n;
	priority_queue<int> Q;
	cin >> oper;
	while (oper!="end")
	{
		if (oper == "insert")
		{
			cin >> n;
			Q.push(n);
		}
		else if (!Q.empty()&&oper == "extract")
		{
			//n = Q.top();
			cout << Q.top() << endl;
			Q.pop();
		}
		cin >> oper ;
	}
}