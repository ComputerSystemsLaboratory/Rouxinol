#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
using namespace std;
vector<int> v,memo(1000005,999999),memo2(1000005,999999);
int a;
int main ()
{
	v.push_back(0);
	for(int i=1;i<=300;i++)
	{
		v.push_back(i*(i+1)*(i+2)/6);
	}
	memo[0]=memo2[0]=0;
	for(int i=0;i<=1000000;i++)
	{
		for(int l=0;l<v.size();l++)
		{
			if(i+v[l]>1000000)break;
			if(v[l]%2==1)memo2[i+v[l]]=min(memo2[i+v[l]],memo2[i]+1);
			memo[i+v[l]]=min(memo[i+v[l]],memo[i]+1);
		}
	}
	// for(int i=1;i<100;i++)cout<<memo[i]<<" "<<memo[i]<<endl;
	while(cin>>a&&a)
	{
		cout<<memo[a]<<" "<<memo2[a]<<endl;
	}
	return 0;
}