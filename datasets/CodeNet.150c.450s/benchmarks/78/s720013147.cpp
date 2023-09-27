#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<numeric>

#define INF (1<<28)
#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=(j);i<=(k);i++)
#define fs first
#define sc second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int dp1[3][1000000];
int dp2[3][1000000];
int main(){
	vi v1,v2;
	for(int i=1;;i++){
		int t = i * (i+1) * (i+2) / 6;
		if (t > 1000000) break;
		v1.pb(t);
		if(t&1)v2.pb(t);
	}
	rep(i,1000000) dp1[0][i] = dp2[0][i] = i;
	rep(i,v1.size()-1){
		int n = (i+1)&1,c = i&1;
		rep(j,1000000){
			dp1[2][j] = dp1[n][j] = dp1[c][j];
			if(j>=v1[i+1])
				dp1[2][j] = dp1[n][j] = min(dp1[n][j], dp1[n][j-v1[i+1]] + 1);
		}
	}
	rep(i,v2.size()-1){
		int n = (i+1)&1, c = 1&i;
		rep(j,1000000){
			dp2[2][j] = dp2[n][j] = dp2[c][j];
			if(j>=v2[i+1])
				dp2[2][j] = dp2[n][j] = min(dp2[n][j], dp2[n][j-v2[i+1]]+1);
		}
	}
	int n;
	while(cin>>n,n){
		cout << dp1[2][n] << " " << dp2[2][n] << endl;
	}
	return 0;
}