#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	string op;
	int num;
	priority_queue<int>pq;
	while (cin >> op)
	{
		if (op == "end") break;
		if (op == "insert")
		{
			cin >> num;
			pq.push(num);
		}
		else if (op == "extract")
		{
			cout << pq.top() << endl;
			pq.pop();
		}
	}
}