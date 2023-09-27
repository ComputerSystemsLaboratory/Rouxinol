#include <iostream>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int N, q;
	cin >> N >> q;

	queue<pair<string, int> > Queue;

	for (int i = 0;i < N;i++)
	{
		string name;
		int time;
		cin >> name >> time;
		Queue.push(make_pair(name, time));
	}

	int sum = 0;
	while (!Queue.empty())
	{
		pair<string, int> pro = Queue.front(); Queue.pop();
		sum += min(pro.second, q);

		pro.second -= q;

		if (pro.second > 0)
			Queue.push(pro);
		else
			cout << pro.first << " " << sum << endl;
	}

	return 0;
}