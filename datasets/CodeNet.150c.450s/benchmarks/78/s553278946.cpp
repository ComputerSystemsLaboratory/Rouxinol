#include <bits/stdc++.h>
using namespace std;
const int dx[]={0,1,0,-1,1,-1,-1,1};
const int dy[]={-1,0,1,0,1,1,-1,-1};
const int INF = 1<<30;
const int EPS = 1e-8;
#define PB push_back
#define mk make_pair
#define fi first
#define se second
#define ll long long
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
typedef pair<int,int> Pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int dp[2][1000010];
int data[1000010];
int main(){
	int index=1;
	while(index*(index+1)*(index+2)/6 < 10000000){
		data[index-1] = index*(index+1)*(index+2)/6;
		index++;
	}
	fill(dp[0],dp[0]+1000000,INF);
	fill(dp[1],dp[1]+1000000,INF);
	dp[0][0] = dp[1][0] = 0;
	rep(i,1000000){
		rep(j,index){
			if(i+data[j] < 1000000){
				dp[0][i+data[j]] = min(dp[0][i+data[j]],dp[0][i]+1);
				if(data[j] % 2 == 1){
					dp[1][i+data[j]] = min(dp[1][i+data[j]],dp[1][i]+1);
				}
			}
		}
	}

	int N;

	while(scanf("%d",&N),N){
		printf("%d %d\n",dp[0][N],dp[1][N]);
	}
	return 0;
}