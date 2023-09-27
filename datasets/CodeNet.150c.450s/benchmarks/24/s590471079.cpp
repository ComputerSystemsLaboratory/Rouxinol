#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;


class Info
{
public:

	int D;
	int P;

	Info(int d,int p)
		: D(d)
		, P(p)
	{
	}

	bool operator<(const Info & info)const
	{
		return P > info.P;
	}
};


bool solve()
{
	int N, M;
	cin >> N >> M;
	if (N == 0 & M == 0) { return false; }

	list<Info> info;
	
	for (int i = 0; i < N; ++i)
	{
		int D, P;
		cin >> D >> P;
		info.emplace_back(D, P);
	}

	info.sort();

	int ans = 0;
	while (!info.empty())
	{
		if (M - info.front().D > 0)
		{
			M -= info.front().D;
		}
		else
		{
			ans += (info.front().D - M)*info.front().P;
			M = 0;
		}
		info.pop_front();
	}
	cout << ans << endl;

	return true;
}


int main()
{
	while(solve())
	{
	}
	


	return 0;
}
