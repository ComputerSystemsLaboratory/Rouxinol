#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+8
#define EPS 1e-8
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define MOD 100000
typedef long long ll;
typedef pair < int , int > Pii;
int main(){
	int n;
	scanf("%d",&n);
	int num[128];
	ll dp[101][21]={{0}};
	rep(i,n){
		scanf("%d",&num[i]);
	}
	dp[1][num[0]] = 1;
	reps(i,1,n-1){
		rep(j,21){
			if(dp[i][j] > 0){
				if(j+num[i] >= 0 && j+num[i] < 21)dp[i+1][j+num[i]] += dp[i][j];
				if(j-num[i] >= 0 && j-num[i] < 21)dp[i+1][j-num[i]] += dp[i][j];
			}
		}
	}
	/*reps(i,1,n){
		rep(j,21){
			printf("%d ",dp[i][j]);
		}
		puts("");
	}*/
	printf("%lld\n",dp[n-1][num[n-1]]);
	return 0;
}