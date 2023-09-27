#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int n,r;

	while(cin>>n>>r && n && r)
	{
		int card[100000]={};
		for(int i=n,j=1;i>=1;i--,j++)card[j]=i;
		rep(i,r)
		{
			int p,c;
			cin>>p>>c;
			for(int j=p;j>1;j--)
			{
				//cout<<j<<endl;
				for(int k=j;k<c+j;k++)
				{
					swap(card[k],card[k-1]);
					/*
					cout<<"swap:"<<k<<" "<<k-1<<endl;
					rep_to(1,l,n+1)cout<<card[l]<<" ";
					cout<<endl;
					*/
				}
			}
		}
		cout<<card[1]<<endl;
	}
	return 0;
}