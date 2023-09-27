#include <iostream>

using namespace std;

void solve()
{
	int a[4], b[4];
	while(cin >> a[0])
	{
		for(int i = 1; i < 4; ++i)
		{
			cin >> a[i];
		}
		for(int i = 0; i < 4; ++i)
		{
			cin >> b[i];
		}
		int Hit = 0;
		int Blow = 0;
		for(int i = 0; i < 4; ++i)
		{
			for(int j = 0; j < 4; ++j)
			{
				if(a[i] == b[j] && i == j)
				{
					++Hit;
				}
				else if(a[i] == b[j])
				{
					++Blow;
				}
			}
		}
		cout << Hit << " " << Blow << endl;
	}
}

int main()
{
	solve();
	return(0);
}