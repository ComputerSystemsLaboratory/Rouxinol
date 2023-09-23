#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		lint dp[35]={},ans;
		dp[1]=1;
		dp[2]=2;
		dp[3]=4;
		if(n>3){
			rep(i,4,n+1){
				dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
			}
		}
		ans=dp[n]/3650;
		if(dp[n]%3650) ans++;
		o(ans);
	}
}