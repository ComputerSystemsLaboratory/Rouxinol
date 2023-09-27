#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<math.h>
#include<unordered_map>

using namespace std;
using vec = vector<int>;
using mat = vector<vec>;
using lst = list<int>;


class Event
{
public:
	int add;
	string time;

	Event(int a)
	{
		add = a;
		cin >> time;
	}

	bool operator<(const Event & a)const
	{
		if (time == a.time)return add < a.add;
		return time < a.time;
	}
};


bool solve()
{
	int n; cin >> n;
	if (n == 0)return false;

	list<Event> eLst;

	for (int i = 0; i < n; ++i)
	{
		eLst.emplace_back(1);
		eLst.emplace_back(-1);
	}
	eLst.sort();

	int ans = 0, num = 0;
	while (!eLst.empty())
	{
		num += eLst.front().add;
		ans = max(ans, num);
		eLst.pop_front();
	}

	cout << ans << endl;

	return true;
}


int main()
{
	while (solve());

	return 0;
}
