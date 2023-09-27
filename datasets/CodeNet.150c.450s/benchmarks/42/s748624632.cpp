#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <stack>
#include <queue>

#define INT_MAX 2147483647
#define INT_MIN -2147483647
using namespace std;

void print(vector<pair<char, int> > &data)
{
	for (int i = 0; i < data.size() - 1; ++i)
		cout << data[i].first << data[i].second << " ";

	cout << data.back().first << data.back().second << endl;
}

int main()
{
	int num, timeSpan;
	cin >> num >> timeSpan;

	string name;
	int t;
	queue<pair<string, int>> q;
	while (cin >> name >> t)
	{
		q.push(make_pair(name, t));
	}
	int curTime = 0;
	while (!q.empty())
	{
		pair<string, int> pa = q.front();
		q.pop();
		if (pa.second <= timeSpan)
		{
			curTime += pa.second;
			cout << pa.first << " " << curTime << endl;
		}
		else
		{
			pa.second -= timeSpan;
			curTime += timeSpan;
			q.push(pa);
		}
	}
	return 0;
}