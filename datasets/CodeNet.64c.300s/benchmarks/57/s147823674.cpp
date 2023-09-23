#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
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
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define EQ(a,b) (abs((a)-(b))<EPS)
int r,c;
int b[10][10000];
int t[10][10000];
int ans;
int count1;
int count2;
int main()
{
	while(1)
	{
		ans=0;
		memset(b,0,sizeof(b));
		memset(t,0,sizeof(t));
		cin >> r >> c;
		if(r==0&&c==0)break;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cin >> b[i][j];
			}
		}
		for(int i=0;i<1<<r;i++)
		{
			memcpy(t,b,sizeof(b));
			for(int j=0;j<r;j++)
			{
				if((i>>j)&1==1)
				{
					for(int k=0;k<c;k++)
					{
						t[j][k]^=1;
					}
				}
			}
			count2=0;
			for(int k=0;k<c;k++)
			{
				count1=0;
				for(int j=0;j<r;j++)
				{
					count1 += t[j][k];
				}
				count2 += max(r-count1,count1);
			}
			ans=max(ans,count2);
		}
		cout << ans << endl;
	}
	return 0;
}