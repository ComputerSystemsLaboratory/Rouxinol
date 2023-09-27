#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
	vector< pair<string, int> > a;
	string z;
	cin>>z;
	a.push_back(pair<string,int>(z,1));
	while(cin>>z)
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i].first==z)
			{
				a[i].second++;
			}
			if(i==a.size()-1)
			{
				a.push_back(pair<string,int>(z,1));
				break;
			}
		}
	}
	int m=-1;
	int s=-1;
	for(int i=0;i<a.size();i++)
	{
		m=max(m,a[i].second);
		s=max(s,(int)a[i].first.length());
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i].second==m)
		{
			cout<<a[i].first<<" ";
		}
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i].first.size()==s)
		{
			cout<<a[i].first<<endl;;
		}
	}
	return 0;
}