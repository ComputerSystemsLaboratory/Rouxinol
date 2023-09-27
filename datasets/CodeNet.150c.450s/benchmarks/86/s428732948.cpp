


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
	int n,m,p;

	while(cin >> n >> m >> p && n && m)
	{
		int x[101];

		for(int i = 0;i < n;i++)
		{
			cin >> x[i];
		}

		
		int tmp = 0;
		int sum = 0;

		for(int i = 0;i < n;i++)
		{
			if(m == i+1)tmp = x[i];
			sum += x[i];
		}
				
		int out;
		
		if(tmp)
		out = sum *(100 - p)/tmp;
		else
		out = 0;

		cout << out << endl;
	}

  return 0;
}