#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#define fi first
#define se second
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int main() {
	int n;
	int ans;
	int dp[35];
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	while(cin>>n){
		if(n==0){
			break;
		}
		for(int i=3;i<n+3;i++){
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		}
		if(dp[n+2]%3650==0){
			ans=dp[n+2]/3650;
		}
		else{
			ans=dp[n+2]/3650+1;
		}
		cout<<ans<<endl;
	}
}