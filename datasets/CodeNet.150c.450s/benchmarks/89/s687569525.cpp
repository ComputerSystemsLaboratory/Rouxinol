#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <algorithm>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
  
using namespace std;
  
int main()
{
	int a,d,n;

	while(cin >> a >> d >> n && (a || d || n))
	{
		int tmp = a;
		int count = 0;

		while(true)
		{
			bool flag = true;

			if(tmp == 2)count++;

			for(int i = 2;i <= tmp/i;i++)
			{
				flag =false;
				double tmp2 = (double)tmp/(double)i;
				if(ceil(tmp2) == floor(tmp2))
				{
					flag = true;
					break;
				}
			}
			if(!flag)count++;

			if(count == n)break;

			tmp += d;
		}

		cout << tmp << endl;
	}

	return 0;
}