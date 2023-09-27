#include <iostream>
#include <map>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	multimap<int, P> memo;
	for(int i = 1; i < 151; ++i)
	{
		for(int j = i + 1; j < 151; ++j)
		{
			memo.insert(map<int, P>::value_type(i * i + j * j, P(i, j)));
		}
	}
	int h, w;
	while(cin >> h >> w, h || w)
	{
		int diagonal = h * h + w * w;
		multimap<int, P>::iterator it = memo.begin();
		while(it != memo.end())
		{
			if(it->first == diagonal)
			{
				while(it->second.first != h && it->second.second != w)
				{
					++it;
				}
				++it;
				cout << it->second.first << " " << it->second.second << endl;
				break;
			}
			++it;
		}
	}
}

int main()
{
	solve();
	return(0);
}