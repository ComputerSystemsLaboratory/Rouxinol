#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef pair<int,int> int_pair;
typedef pair<ll,ll> ll_pair;
#define N 1002
#define INF 1e9+1

int Levenshtein(string s1,string s2){//hensyu kyori
	vector<vector<int> > dp;
	int ss1=s1.size(),ss2=s2.size();
	int n=max(ss1,ss2)+1;
	dp.resize(n);for(int i=0;i<n;i++)dp[i].resize(n);
	for(int i=0;i<ss1+1;i++)dp[i][0]=i;
	for(int i=0;i<ss2+1;i++)dp[0][i]=i;
	for(int i=1;i<ss1+1;i++){
		for(int j=1;j<ss2+1;j++){
			int a,b=1;
			if(s1[i-1]==s2[j-1])b=0;
			a=min(dp[i-1][j]+1,dp[i][j-1]+1);
			a=min(a,dp[i-1][j-1]+b);
			dp[i][j]=a;
		}
	}
	return dp[s1.size()][s2.size()];
}

string s1,s2;
int main(){
	cin>>s1>>s2;
	cout<<Levenshtein(s1,s2)<<endl;
	return 0;
}
