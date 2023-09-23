#include <iostream>

using namespace std;

void solve()
{
	int a[4];
	int b[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		int Hit = 0;
		int Blow = 0;
		for(int i = 0; i < 4; ++i)
		{
			for(int j = 0; j < 4; ++j)
			{
				if(a[i] == b[j])
				{
					if(i == j)
					{
						++Hit;
					}
					else
					{
						++Blow;
					}
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