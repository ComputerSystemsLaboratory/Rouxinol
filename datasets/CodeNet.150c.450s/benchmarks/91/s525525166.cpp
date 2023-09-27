#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <iomanip>
#include <sstream>

using namespace std;

#define ll long long
#define eps 1e-7
#define inf 0x1fffffff
#define maxn 1000010



bool is[maxn];
vector<int>p;



int main(int argc, char *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	memset(is,true,sizeof(is));
	for(int i=2;i<maxn;i+=2)
		is[i] = false;
	is[0] = is[1] = false;
	p.push_back(2);
	for(int i=3;i<maxn;i+=2)
	{
		if(is[i])
		{
			p.push_back(i);
			for(int j=i+i;j<maxn;j+=i)
			{
				is[j] = false;
			}
		}
	}
	while(cin>>n)
	{
		cout<<upper_bound(p.begin(),p.end(),n)-p.begin()<<endl;
	}
	return 0;
}