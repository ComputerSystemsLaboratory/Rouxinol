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
#define F first
#define S second
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
int n,w;
int V[120],W[120];
int dp[11000]={};

int main()
{
	cin>>n>>w;
	for(int i=0;i<n;i++)
	{
		cin>>V[i]>>W[i];
	}


	for(int i=0;i<n;i++)
	{
		for(int l=w;l>=0;l--)
		{
			if(l-W[i]<0)break;
			dp[l]=max(dp[l],dp[l-W[i]]+V[i]);
		}
	}
	cout<<dp[w]<<endl;
	return 0;

}