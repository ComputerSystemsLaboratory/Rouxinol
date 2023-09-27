#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> P;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		if(n == 1)
		{
			cout << 1 << " " << 1 << endl;
			continue;
		}
		int wmin = 0, wmax = 0;
		int hmin = 0, hmax = 0;
		vector<P> Vec(n - 1);
		for(int i = 0; i < n - 1; ++i)
		{
			cin >> Vec[i].first >> Vec[i].second;
		}
		vector<P> Rect(n);
		Rect[0].first = 0;
		Rect[0].second = 0;
		for(int i = 0; i < n - 1; ++i)
		{
			if(Vec[i].second == 0)
			{
				Rect[i + 1].first = Rect[Vec[i].first].first - 1;
				Rect[i + 1].second = Rect[Vec[i].first].second;
			}
			else if(Vec[i].second == 1)
			{
				Rect[i + 1].first = Rect[Vec[i].first].first;
				Rect[i + 1].second = Rect[Vec[i].first].second - 1;
			}
			else if(Vec[i].second == 2)
			{
				Rect[i + 1].first = Rect[Vec[i].first].first + 1;
				Rect[i + 1].second = Rect[Vec[i].first].second;
			}
			else if(Vec[i].second == 3)
			{
				Rect[i + 1].first = Rect[Vec[i].first].first;
				Rect[i + 1].second = Rect[Vec[i].first].second + 1;
			}
			if(Rect[i + 1].first < wmin)
			{
				wmin = Rect[i + 1].first;
			}
			if(Rect[i + 1].first > wmax)
			{
				wmax = Rect[i + 1].first;
			}
			if(Rect[i + 1].second < hmin)
			{
				hmin = Rect[i + 1].second;
			}
			if(Rect[i + 1].second > hmax)
			{
				hmax = Rect[i + 1].second;
			}
		}
		cout << wmax - wmin  + 1 << " " << hmax - hmin + 1 << endl;
	}
}

int main()
{
	solve();
	return(0);
}