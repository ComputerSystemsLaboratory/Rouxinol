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
	int T;
	cin>>T;
	
	for (int ca = 1; ca <= T; ++ca)
	{
		int a, b, c;
		cin>>a>>b>>c;
		a *= a;
		b *= b;
		c *= c;
		
		if (a+b ==c || a+c == b || a == b+c)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}