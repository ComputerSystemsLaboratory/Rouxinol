#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<iomanip>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
	int a, b;
	while(cin>>a>>b)
	{
		int c = a+b;
		int ans = 0;
		
		while(c > 0)
		{
			ans++;
			c /= 10;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}