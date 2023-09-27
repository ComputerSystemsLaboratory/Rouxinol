#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=1000000000000000010LL;
const int MAX=10000010;
const double EPS=1e-3;
int dx[4]={0,1,0,1};
int dy[4]={0,0,1,1};
int dp[1010][1010];
int dfs(int i,int u,int s){
	if(i==10){
		if(u==0&&s==0){
			return 1;
		}else{
			return 0;
		}
	}
	int ret=0;
	ret+=dfs(i+1,u-1,s-i);
	ret+=dfs(i+1,u,s);
	return ret;
}
int main(){
	int n,s;
	while(cin>>n>>s,n+s){
		cout<<dfs(0,n,s)<<endl;
	}
}

