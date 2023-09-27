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
int t[18][18];
int dx[2]={0,-1};
int dy[2]={-1,0};
int main()
{
	while(1)
	{
		memset(t,0,sizeof(t));
		int a,b;
		cin >> a >> b;
		if(a==0&&b==0)break;
		int n;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			int p,q;
			cin >> p >> q;
			t[p][q]=-1;
		}
		for(int i=1;i<=a;i++)
		{
			if(t[i][1]==-1)break;
			t[i][1]=1;
		}
		for(int i=1;i<=b;i++)
		{
			if(t[1][i]==-1)break;
			t[1][i]=1;
		}
		for(int i=2;i<=b;i++)
		{
			for(int j=2;j<=a;j++)
			{
				if(t[j][i]==-1)continue;
				for(int k=0;k<2;k++)
				{
					if(t[j+dx[k]][i+dy[k]]==-1)continue;
					t[j][i]+=t[j+dx[k]][i+dy[k]];
				}
			}
		}
		cout << t[a][b] << endl;
	}
	return 0;
}