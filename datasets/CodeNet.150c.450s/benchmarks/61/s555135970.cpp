


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;




int main()
{
	int n,a,b,c,x;

	while(cin >> n >> a >> b >> c >> x && ( n || a || b || c || x))
	{
		int y[101];

		for(int i = 0;i < n;i++)
		{
			cin >> y[i];
		}

		bool f[101];
		memset(f,0,101*sizeof(bool));
		bool flag = false;
		int out = 0;
		int Min = 0;

		for(int i = 0;i <= 10000;i++)
		{

			if(x == y[Min])
			{
				f[Min++] = true;

				if(Min == n){flag = true;out = i;break;}
			}


			int temp = (a * x + b) % c;


			x = temp;
		}

		if(flag)cout << out << endl;
		else    cout << -1  << endl;

		
	}

  return 0;
}