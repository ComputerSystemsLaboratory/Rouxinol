#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

#define int long long
#define rep(i,n) for(int i = 0; i < (n); i++)
#define INF ((long long)1e18)
#define MOD ((int)1e9+7)
#define endl "\n"

#define yn(f) ((f)?"Yes":"No")
#define YN(f) ((f)?"YES":"NO")

#define MAX 1100

int dp[MAX][MAX];

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);
	
	string s1, s2;
	
	cin>>s1>>s2;
	
	for(size_t i = 0; i <= s1.size(); i++) dp[i][0] = i;
	for(size_t i = 0; i <= s2.size(); i++) dp[0][i] = i;
	
	for(size_t i = 0; i < s1.size(); i++){
		for(size_t j = 0; j < s2.size(); j++){
			dp[i+1][j+1] = min(min(dp[i][j+1]+1,dp[i+1][j]+1),dp[i][j]+!(s1[i]==s2[j]));
		}
	}
	
	cout<<dp[s1.size()][s2.size()]<<endl;
	
	return 0;
}
