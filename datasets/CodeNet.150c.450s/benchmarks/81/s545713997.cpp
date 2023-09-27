#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <complex>
#include <vector>
#include <cstdio>
#include <cmath>
#include<utility>
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
using namespace std;

template<class T>inline string toString(T x){
        ostringstream sout; sout<<x; return sout.str();
}
const ll MOD=1e9+7;
const int inf=(ll)1e9;
const double PI=acos(-1.0);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.precision(10);
	cout<<fixed;
	int n;
	while(cin>>n,n){
		int dp[11][11];
		int m=0;
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				dp[i][j]=inf;
			}
		}
		for(int i=0;i<11;i++){
			dp[i][i]=0;
		}
		for(int i=0;i<n;i++){
			int a,b,c;cin>>a>>b>>c;
			dp[a][b]=c;
			dp[b][a]=c;
			m=max(m,max(a,b));
		}
		m++;
		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					dp[i][j]=min(dp[i][k]+dp[k][j],dp[i][j]);
				}
			}
		}
		int ans=inf;
		int ansi=0;
		for(int i=0;i<m;i++){
			int sum=0;
			for(int j=0;j<m;j++){
				if(i==j)continue;
				sum+=dp[i][j];
			}
			if(ans>sum){
				ans=sum;
				ansi=i;
			}
		}
		cout<<ansi<<" "<<ans<<endl;
	}
	return 0;
}