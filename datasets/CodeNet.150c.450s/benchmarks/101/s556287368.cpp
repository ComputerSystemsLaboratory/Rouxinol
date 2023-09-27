#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int parent[n];
	for(int i=0;i<n;i++)
	{
		parent[i] = -1;
	}
	int first,second;
	for(int i=0;i<m;i++)
	{
		cin>>first>>second;
		while(parent[first]!=-1)
		{
			first=parent[first];
		}
		while(parent[second]!=-1)
		{
			second=parent[second];
		}
		if(second!=first)
		{
			parent[second]=first;
		}
	}
	int cases,first1,second1;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
		cin>>first1>>second1;
		while(parent[first1]!=-1)
		{
			first1=parent[first1];
		}
		while(parent[second1]!=-1)
		{
			second1=parent[second1];
		}
		if(first1==second1)
			cout<<"yes";
		else
			cout<<"no";
		cout<<endl;
	}
}
