#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n)
	{
		if(n >= 37)
		{
			cout << 0 << endl;
		}
		else
		{
			int count = 0;
			for(int i = 0; i < 10; ++i)
			{
				for(int j = 0; j < 10; ++j)
				{
					for(int k = 0; k < 10; ++k)
					{
						for(int l = 0; l < 10; ++l)
						{
							if(i + j + k + l == n)
							{
								++count;
							}
						}
					}
				}
			}
			cout << count << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}