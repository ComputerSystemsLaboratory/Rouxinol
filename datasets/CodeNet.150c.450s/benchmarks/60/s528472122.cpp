#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int map[255][255];
int main()
{	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			map[i][j]=0;
		}
	for(int i=0;i<n;i++)
	{
		int cur,k,u;
		cin>>cur>>k;
		while(k--)
		{
			cin>>u;
			map[cur][u]=1;
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(j!=n) cout<<map[i][j]<<" ";
			else cout<<map[i][j]<<endl;
		}
	return 0;
}
