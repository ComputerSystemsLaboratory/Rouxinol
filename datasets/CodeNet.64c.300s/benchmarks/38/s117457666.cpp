#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,r,n) for(int i=r;i<(int)n;i++)
using namespace std;
int in() {int x; cin >> x; return x;}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		bool ans = true;
		int r = -1, l = -2;

		for (int i = 0; i < 10; i++)
		{
			int x;
			cin >> x;
			if (r < l)swap(r, l);

			if (l > x)
			{
				ans = false;
			}

			if(r < x)r=x;
			else l=x;


			if (r < l)swap(r, l);
		}


		if (ans)cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;

}