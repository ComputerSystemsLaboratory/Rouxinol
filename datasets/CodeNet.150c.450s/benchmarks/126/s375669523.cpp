#include<cstdio>
#include<algorithm>
#include<functional>
#include<cstring>
#include<iostream>
#include<cmath>
#include<queue>
#include<cctype>
#include<string>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define INF 2100000000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define SS stringstream
#define sz(x) ((int)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define clr(a,b) memset((a),(b),sizeof(a))
int dp[17][17];
int main(void)
{
	int a,b,n,x,y;
	while(cin>>a>>b) {
		if(!a&&!b) return 0;
		rep(i,0,b+1) {
			rep(j,0,a+1) {
				dp[i][j]=0;
			}
		}	
		cin>>n;
		rep(i,0,n) {
			cin>>x>>y;
			x--,y--;
			dp[y][x]=-1;
		}
		dp[0][0]=1;
		rep(i,0,b) {
			rep(j,0,a) {
				if(dp[i][j]!=0&&dp[i][j]!=-1) {
					if(dp[i+1][j]!=-1&&i+1<=b) dp[i+1][j]+=dp[i][j];
					if(dp[i][j+1]!=-1&&j+1<=a) dp[i][j+1]+=dp[i][j];
				}
			}
		}
		/*rep(i,0,b) {
			rep(j,0,a) {
				printf("%3d",dp[i][j]);
			}
			cout<<endl;
		}*/
		cout<<dp[b-1][a-1]<<endl;
	}
}