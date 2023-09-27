#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	int w, n;
	cin >> w;
	cin >> n;
	vector<P> Vec(n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d,%d", &Vec[i].first, &Vec[i].second);
	}
	vector<int> Answer(w + 1);
	int pos;
	for(int i = 1; i <= w; ++i)
	{
		pos = i;
		for(int j = 0; j < n; ++j)
		{
			if(pos == Vec[j].first)
			{
				pos = Vec[j].second;
			}
			else if(pos == Vec[j].second)
			{
				pos = Vec[j].first;
			}
		}
	Answer[pos] = i;
	}
	for(int i = 1; i <= w; ++i)
	{
		cout << Answer[i] << endl;
	}
}

int main()
{
	solve();
	return(0);
}