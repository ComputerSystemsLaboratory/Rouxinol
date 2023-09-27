#include<iostream>
#include<algorithm>
#include <utility>
using namespace std;
int N, M;
pair<int, int> PD[10010];
int solve();
int min(int, int);
bool compare(pair<int, int>, pair<int, int>);
int main()
{
	while (cin >> N >> M && N)
	{
		int d, p;
		for (int i = 0; i<N; i++)
		{
			cin >> d >> p;
			PD[i] = make_pair(p, d);
		}
		sort(PD, PD + N, compare);
		cout << solve() << endl;
	}

	return 0;
}

int solve()
{
	int s = 0;
	for (int i = 0; i<N; i++)
		s += PD[i].first*PD[i].second;
	for (int i = 0; i<N; i++)
	{
		if (M <= 0)break;
		int guarded = min(M, PD[i].second);
		s -= PD[i].first*guarded;
		M -= guarded;
	}
	return s;
}

int min(int a, int b)
{
	if (a<b)return a;
	else return b;
}
bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.first > b.first;
}

