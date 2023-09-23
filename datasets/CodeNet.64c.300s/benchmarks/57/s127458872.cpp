//Bokann ga bokka--nn!!
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int val[10005];
int f[15][10005];
int a,b;
int main(){
	while(1)
	{
		cin >> a >>b;
		if(!a) return 0;
		memset(val,0,sizeof(val));
		
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
			
				cin >> f[i][j];
				val[j]+=1-f[i][j];
			}
		}
		int ret=0;
		for(int i=0;i<(1<<a);i++)
		{
		int res=0;
			bool use[15]={};
			for(int j=0;j<a;j++)
			{
				if(((i>>j) &1))
				{
					use[j]=1;
				}
			}
			
			for(int j=0;j<a;j++)
			{
				if(!use[j]) continue;
				for(int k=0;k<b;k++)
				{
					val[k]+=2*f[j][k]-1;
				}
			}
			for(int k=0;k<b;k++)
			{
				res+=max(val[k],a-val[k]);
			}
			for(int j=0;j<a;j++)
			{
				if(!use[j]) continue;
				for(int k=0;k<b;k++)
				{
					val[k]-=2*f[j][k]-1;
				}
			}
			ret=max(ret,res);
		}
		cout << ret << endl;
	}
}