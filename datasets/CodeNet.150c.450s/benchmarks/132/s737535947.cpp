#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n, p;
	while(cin >> n >> p)
	{
		if(!n && !p)
		{
			break;
		}
		vector<int> Vec(n);
		int stone = p;
		int count = 0;
		while(true)
		{
			if(stone)
			{
				Vec[count]++;
				stone--;
				if(Vec[count] == p)
				{
					cout << count << endl;
					break;
				}
			}
			else
			{
				stone = Vec[count];
				Vec[count] = 0;
			}
			count++;
			count %= n;
		}
	}
}

int main()
{
	solve();
	return(0);
}